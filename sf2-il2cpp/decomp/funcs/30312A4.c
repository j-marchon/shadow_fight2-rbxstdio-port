// Nekki.SF2.GUI.Shop.ParameterScrollItem$$OnReturnToPool @ RVA 0x30312A4

void Nekki_SF2_GUI_Shop_ParameterScrollItem__OnReturnToPool
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Common_TouchHandler_o *pNVar2;
  
  if ((DAT_04565cff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565cff = 1;
  }
  Nekki_SF2_GUI_BaseScrollItem__OnReturnToPool
            ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields).NDPGGBECMDD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).NDPGGBECMDD;
    if ((pNVar2 != (Nekki_SF2_GUI_Common_TouchHandler_o *)0x0) &&
       (__this_00 = (pNVar2->fields).OMEOMGINDAD,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

