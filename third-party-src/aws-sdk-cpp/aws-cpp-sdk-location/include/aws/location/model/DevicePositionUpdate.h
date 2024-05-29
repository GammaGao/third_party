﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains the position update details for a device.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DevicePositionUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API DevicePositionUpdate
  {
  public:
    DevicePositionUpdate();
    DevicePositionUpdate(Aws::Utils::Json::JsonView jsonValue);
    DevicePositionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device associated to the position update.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device associated to the position update.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The device associated to the position update.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The device associated to the position update.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The device associated to the position update.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The device associated to the position update.</p>
     */
    inline DevicePositionUpdate& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device associated to the position update.</p>
     */
    inline DevicePositionUpdate& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device associated to the position update.</p>
     */
    inline DevicePositionUpdate& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline DevicePositionUpdate& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline DevicePositionUpdate& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The latest device position defined in <a
     * href="https://earth-info.nga.mil/GandG/wgs84/index.html">WGS 84</a> format:
     * <code>[X or longitude, Y or latitude]</code>.</p>
     */
    inline DevicePositionUpdate& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }


    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline DevicePositionUpdate& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline DevicePositionUpdate& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws