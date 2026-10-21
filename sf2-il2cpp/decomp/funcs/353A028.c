// Nekki.SF2.GUI.LockScreen$$Start @ RVA 0x353A028

void Nekki_SF2_GUI_LockScreen__Start(Nekki_SF2_GUI_LockScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *target;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568abb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568abb = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568b3e == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568b3e = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,__this);
  Nekki_SF2_GUI_LockScreen__OAHAAAHHMOL(__this,false,false,in_x3);
  target = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  return;
}

