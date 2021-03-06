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

#include <aws/appsync/model/ApiCacheStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ApiCacheStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ApiCacheStatus GetApiCacheStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ApiCacheStatus::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ApiCacheStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApiCacheStatus::DELETING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return ApiCacheStatus::MODIFYING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApiCacheStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiCacheStatus>(hashCode);
          }

          return ApiCacheStatus::NOT_SET;
        }

        Aws::String GetNameForApiCacheStatus(ApiCacheStatus enumValue)
        {
          switch(enumValue)
          {
          case ApiCacheStatus::AVAILABLE:
            return "AVAILABLE";
          case ApiCacheStatus::CREATING:
            return "CREATING";
          case ApiCacheStatus::DELETING:
            return "DELETING";
          case ApiCacheStatus::MODIFYING:
            return "MODIFYING";
          case ApiCacheStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiCacheStatusMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
