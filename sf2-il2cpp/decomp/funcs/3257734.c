// Nekki.SF2.GUI.Map.MoveableMapPanel$$Init @ RVA 0x3257734

void Nekki_SF2_GUI_Map_MoveableMapPanel__Init
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,
               Nekki_SF2_GUI_Map_MapPanel_o *DOOCPKBJPGG,
               Nekki_SF2_GUI_BaseScrollContent_o *ANGBPBINHBL,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o **ppNVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o **ppUVar3;
  
  if ((DAT_04567172 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_04567172 = 1;
  }
  ppNVar1 = &(__this->fields).ICEHFJNJDDO;
  *ppNVar1 = DOOCPKBJPGG;
  thunk_FUN_01c20e04(ppNVar1,DOOCPKBJPGG);
  if (ANGBPBINHBL != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)ANGBPBINHBL,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    ppUVar3 = &(__this->fields).KFADFKDCDGM;
    *ppUVar3 = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

