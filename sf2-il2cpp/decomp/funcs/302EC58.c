// Nekki.SF2.GUI.SimpleScroll$$OnEndDrag @ RVA 0x302EC58

void Nekki_SF2_GUI_SimpleScroll__OnEndDrag
               (Nekki_SF2_GUI_SimpleScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_BaseScrollItem__o *pSVar2;
  
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,(MethodInfo *)OHNNFPGGEFK);
  *(undefined1 *)&(__this->fields).KIANNGNDAFC = 0;
  *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
  Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
  UnityEngine_UI_ScrollRect__OnEndDrag
            ((UnityEngine_UI_ScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).Items;
  *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
  if (pSVar2 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    uVar1._0_4_ = pSVar2[1].fields._size;
    uVar1._4_4_ = pSVar2[1].fields._version;
                    /* WARNING: Could not recover jumptable at 0x0312ecc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)&(pSVar2->fields)._size)(uVar1,pSVar2[1].klass);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

