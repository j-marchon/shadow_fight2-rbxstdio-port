// Nekki.SF2.GUI.Map.MapPanel$$IKFENPJLMIA @ RVA 0x349E41C

void Nekki_SF2_GUI_Map_MapPanel__IKFENPJLMIA
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  System_Action_ZoneScrollItem__o *pSVar2;
  
  if ((DAT_0456847b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo);
    DAT_0456847b = 1;
  }
  pSVar2 = (__this->fields).CGKKIMGANJE;
  if (pSVar2 == (System_Action_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) {
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Map_ZoneScrollItem_TypeInfo) {
        IMMNELPBGIF = (Il2CppObject *)0x0;
      }
      goto LAB_0359e494;
    }
  }
  IMMNELPBGIF = (Il2CppObject *)0x0;
LAB_0359e494:
                    /* WARNING: Could not recover jumptable at 0x0359e4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pSVar2->fields).super.super.invoke_impl)
            ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
             (pSVar2->fields).super.super.method);
  return;
}

