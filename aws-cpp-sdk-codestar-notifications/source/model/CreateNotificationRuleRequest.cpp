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

#include <aws/codestar-notifications/model/CreateNotificationRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNotificationRuleRequest::CreateNotificationRuleRequest() : 
    m_nameHasBeenSet(false),
    m_eventTypeIdsHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_detailType(DetailType::NOT_SET),
    m_detailTypeHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_status(NotificationRuleStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String CreateNotificationRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_eventTypeIdsHasBeenSet)
  {
   Array<JsonValue> eventTypeIdsJsonList(m_eventTypeIds.size());
   for(unsigned eventTypeIdsIndex = 0; eventTypeIdsIndex < eventTypeIdsJsonList.GetLength(); ++eventTypeIdsIndex)
   {
     eventTypeIdsJsonList[eventTypeIdsIndex].AsString(m_eventTypeIds[eventTypeIdsIndex]);
   }
   payload.WithArray("EventTypeIds", std::move(eventTypeIdsJsonList));

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", m_resource);

  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_detailTypeHasBeenSet)
  {
   payload.WithString("DetailType", DetailTypeMapper::GetNameForDetailType(m_detailType));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NotificationRuleStatusMapper::GetNameForNotificationRuleStatus(m_status));
  }

  return payload.View().WriteReadable();
}




