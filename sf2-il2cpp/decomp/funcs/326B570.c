// Nekki.SF2.GUI.Shop.SidePanel$$SetOpen @ RVA 0x326B570

void Nekki_SF2_GUI_Shop_SidePanel__SetOpen
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool HJEBKCDDBAB,float PNEIGGOFIOA,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *method_00;
  
                    /* try { // try from 0336b574 to 0346b657 has its CatchHandler @ 0336b574
                       catch() { ... } // from try @ 0336b574 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b6b0 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b778 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b85c with catch @ 0336b574
                       catch() { ... } // from try @ 0336b8a4 with catch @ 0336b574
                       catch() { ... } // from try @ 0336b8d4 with catch @ 0336b574 */
  if (PNEIGGOFIOA < 0.0) {
    PNEIGGOFIOA = (__this->fields)._moveTime;
  }
  if (HJEBKCDDBAB) {
    Nekki_SF2_GUI_Shop_SidePanel__AAPEEBAIKCH
              (__this,(UnityEngine_Vector2_o)(__this->fields)._OpenedPosition.fields,PNEIGGOFIOA,
               (MethodInfo *)(ulong)HJEBKCDDBAB);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
LAB_0336b618:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__SetSiblingIndex(__this_01,1,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK(__this,true,method_00);
  }
  else {
    Nekki_SF2_GUI_Shop_SidePanel__AAPEEBAIKCH
              (__this,(UnityEngine_Vector2_o)(__this->fields)._ClosedPosition.fields,PNEIGGOFIOA,
               (MethodInfo *)(ulong)HJEBKCDDBAB);
    Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK(__this,false,method);
    __this_02 = (__this->fields)._CanvasGroup;
    if (__this_02 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_0336b618;
    UnityEngine_CanvasGroup__set_blocksRaycasts(__this_02,true,(MethodInfo *)0x0);
  }
  (__this->fields).DBNELADJPIJ = HJEBKCDDBAB;
  return;
}

