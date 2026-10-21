// Nekki.SF2.GUI.Map.MapButton$$OnPointerClick @ RVA 0x34A1AA8

void Nekki_SF2_GUI_Map_MapButton__OnPointerClick
               (Nekki_SF2_GUI_Map_MapButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  FKNCNNOOOIO_o *pFVar3;
  
  if ((DAT_0456849e & 1) == 0) {
    FUN_01bab630(&StringLiteral_17971);
    DAT_0456849e = 1;
  }
  UnityEngine_UI_Button__OnPointerClick
            ((UnityEngine_UI_Button_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  pFVar3 = (__this->fields).AEPNEAIEKOL;
  if (((pFVar3 != (FKNCNNOOOIO_o *)0x0) &&
      (pSVar2 = (pFVar3->fields).JIJLBFGKNJK, pSVar2 != (System_String_o *)0x0)) &&
     (pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0), pSVar2 != (System_String_o *)0x0))
  {
    bVar1 = System_String__Contains(pSVar2,StringLiteral_17971,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

