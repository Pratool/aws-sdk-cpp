﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/comprehend/model/DescribeEntityRecognizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEntityRecognizerRequest::DescribeEntityRecognizerRequest() : 
    m_entityRecognizerArnHasBeenSet(false)
{
}

Aws::String DescribeEntityRecognizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entityRecognizerArnHasBeenSet)
  {
   payload.WithString("EntityRecognizerArn", m_entityRecognizerArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEntityRecognizerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DescribeEntityRecognizer"));
  return headers;

}



