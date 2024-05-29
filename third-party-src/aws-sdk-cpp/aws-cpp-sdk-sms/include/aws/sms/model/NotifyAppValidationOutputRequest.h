﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/NotificationContext.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API NotifyAppValidationOutputRequest : public SMSRequest
  {
  public:
    NotifyAppValidationOutputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyAppValidationOutput"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline NotifyAppValidationOutputRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline NotifyAppValidationOutputRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline NotifyAppValidationOutputRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The notification information.</p>
     */
    inline const NotificationContext& GetNotificationContext() const{ return m_notificationContext; }

    /**
     * <p>The notification information.</p>
     */
    inline bool NotificationContextHasBeenSet() const { return m_notificationContextHasBeenSet; }

    /**
     * <p>The notification information.</p>
     */
    inline void SetNotificationContext(const NotificationContext& value) { m_notificationContextHasBeenSet = true; m_notificationContext = value; }

    /**
     * <p>The notification information.</p>
     */
    inline void SetNotificationContext(NotificationContext&& value) { m_notificationContextHasBeenSet = true; m_notificationContext = std::move(value); }

    /**
     * <p>The notification information.</p>
     */
    inline NotifyAppValidationOutputRequest& WithNotificationContext(const NotificationContext& value) { SetNotificationContext(value); return *this;}

    /**
     * <p>The notification information.</p>
     */
    inline NotifyAppValidationOutputRequest& WithNotificationContext(NotificationContext&& value) { SetNotificationContext(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    NotificationContext m_notificationContext;
    bool m_notificationContextHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws