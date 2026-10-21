// Nekki.SF2.Core.ApplicationController$$TimeSinceResume @ RVA 0x30BEEAC

System_Nullable_float__o
Nekki_SF2_Core_ApplicationController__TimeSinceResume
          (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Nullable_float__Fields local_18;
  
  if ((DAT_04566265 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    DAT_04566265 = 1;
  }
  if (((__this->fields).LNLNEPIGAEG.fields.hasValue == false) ||
     (fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0),
     (__this->fields).LNLNEPIGAEG.fields.hasValue == false)) {
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value = 0.0;
  }
  else {
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_18,fVar1 - (__this->fields).LNLNEPIGAEG.fields.value
               ,Method_System_Nullable<float>__ctor__);
  }
  return (System_Nullable_float__o)local_18;
}

