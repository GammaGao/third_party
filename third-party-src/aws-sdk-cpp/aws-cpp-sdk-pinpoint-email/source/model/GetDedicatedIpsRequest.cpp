﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/GetDedicatedIpsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDedicatedIpsRequest::GetDedicatedIpsRequest() : 
    m_poolNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false)
{
}

Aws::String GetDedicatedIpsRequest::SerializePayload() const
{
  return {};
}

void GetDedicatedIpsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_poolNameHasBeenSet)
    {
      ss << m_poolName;
      uri.AddQueryStringParameter("PoolName", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("PageSize", ss.str());
      ss.str("");
    }

}


