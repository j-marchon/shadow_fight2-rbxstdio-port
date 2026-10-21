// Nekki.Utils.DetailedLog$$GIENGNEGHPJ @ RVA 0x352EF14

void Nekki_Utils_DetailedLog__GIENGNEGHPJ(Nekki_Utils_DetailedLog_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *target;
  FPNPHJJPLKB_o *__this_00;
  FPNPHJJPLKB_o **ppFVar1;
  
  if ((DAT_04568a48 & 1) == 0) {
    FUN_01bab630(&FPNPHJJPLKB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a48 = 1;
  }
  target = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  __this_00 = (FPNPHJJPLKB_o *)thunk_FUN_01bda818(FPNPHJJPLKB_TypeInfo);
  FPNPHJJPLKB___ctor(__this_00,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields)._OHKFCDKHGJO_k__BackingField;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  return;
}

