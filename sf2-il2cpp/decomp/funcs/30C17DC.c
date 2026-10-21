// Nekki.SF2.Core.ApplicationController$$Awake @ RVA 0x30C17DC

void Nekki_SF2_Core_ApplicationController__Awake
               (Nekki_SF2_Core_ApplicationController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566288 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04566288 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  UnityEngine_Application__set_targetFrameRate(0x3c,(MethodInfo *)0x0);
  return;
}

