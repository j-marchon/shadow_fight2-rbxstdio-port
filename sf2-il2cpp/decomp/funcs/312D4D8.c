// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$Init @ RVA 0x312D4D8

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__Init
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t KEFILECBPMF,
               int32_t BHOOMCEABGH,int32_t KGLMELJBHJL,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *pNVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_GridLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **ppUVar3;
  UnityEngine_Vector2_o FDFANDCCJAG;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  method_00 = (MethodInfo *)(ulong)(uint)BHOOMCEABGH;
  if ((DAT_045666a1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<GridLayoutGroup>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_045666a1 = 1;
  }
  (__this->fields).FLHKJAKLFPH = KEFILECBPMF;
  (__this->fields).NNDFIMDGJLN = BHOOMCEABGH;
  (__this->fields).KGLMELJBHJL = KGLMELJBHJL;
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
  ppUVar3 = &(__this->fields).DFAOPAGGKAG;
  *ppUVar3 = pUVar1;
  thunk_FUN_01c20e04(ppUVar3,pUVar1);
  if (*ppUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_rect(*ppUVar3,(MethodInfo *)0x0);
    if (*ppUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = UnityEngine_RectTransform__get_rect(*ppUVar3,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._playerOne;
      FDFANDCCJAG.fields.x = UVar4.fields.m_Width / (float)KEFILECBPMF;
      FDFANDCCJAG.fields.y = UVar5.fields.m_Height / (float)BHOOMCEABGH;
      (__this->fields).IFIDDDFLHCF.fields.x = FDFANDCCJAG.fields.x;
      (__this->fields).IFIDDDFLHCF.fields.y = FDFANDCCJAG.fields.y;
      if (pNVar2 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PlayerSelector__SetSize(pNVar2,FDFANDCCJAG,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._playerTwo;
        if (pNVar2 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
          Nekki_SF2_GUI_Pvp_PlayerSelector__SetSize
                    (pNVar2,(UnityEngine_Vector2_o)(__this->fields).IFIDDDFLHCF.fields,
                     (MethodInfo *)0x0);
          __this_00 = (__this->fields)._cellContainer;
          if ((__this_00 != (UnityEngine_Transform_o *)0x0) &&
             (__this_01 = (UnityEngine_UI_GridLayoutGroup_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)__this_00,
                                     Method_UnityEngine_Component_GetComponent<GridLayoutGroup>__),
             __this_01 != (UnityEngine_UI_GridLayoutGroup_o *)0x0)) {
            UnityEngine_UI_GridLayoutGroup__set_cellSize
                      (__this_01,(UnityEngine_Vector2_o)(__this->fields).IFIDDDFLHCF.fields,
                       (MethodInfo *)0x0);
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(__this,0,method_00);
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(__this,1,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

