/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.doubango.utils;

public enum CpuFamily_t {
  UNKNOWN(0),
  ARM,
  X86;

  public final int swigValue() {
    return swigValue;
  }

  public static CpuFamily_t swigToEnum(int swigValue) {
    CpuFamily_t[] swigValues = CpuFamily_t.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (CpuFamily_t swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + CpuFamily_t.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private CpuFamily_t() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private CpuFamily_t(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private CpuFamily_t(CpuFamily_t swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

