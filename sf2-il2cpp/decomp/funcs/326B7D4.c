// Nekki.SF2.GUI.Shop.SidePanel$$.ctor @ RVA 0x326B7D4

void Nekki_SF2_GUI_Shop_SidePanel___ctor(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_o *pNVar1;
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_o **ppNVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_045671e2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045671e2 = 1;
  }
  (__this->fields)._OpenButtonPosition.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields)._CloseButtonPosition.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields)._ClosedPosition.fields = (UnityEngine_Vector2_Fields)0x3f800000;
  (__this->fields)._OpenedPosition.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields)._OpenImage = StringLiteral_1;
  thunk_FUN_01c20e04();
                    /* try { // try from 0336b854 to 0346b857 has its CatchHandler @ 0336b87c */
                    /* try { // try from 0336b858 to 0346b85b has its CatchHandler @ 0336b878 */
                    /* try { // try from 0336b85c to 0346b89f has its CatchHandler @ 0336b574 */
  (__this->fields)._CloseImage = StringLiteral_1;
                    /* catch() { ... } // from try @ 0336b74c with catch @ 0336b860 */
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0336b768 with catch @ 0336b864 */
                    /* catch() { ... } // from try @ 0336b760 with catch @ 0336b868 */
                    /* catch() { ... } // from try @ 0336b734 with catch @ 0336b86c */
  (__this->fields)._EnableScrolling = true;
                    /* catch() { ... } // from try @ 0336b698 with catch @ 0336b870 */
  (__this->fields)._moveTime = 1.0;
                    /* catch() { ... } // from try @ 0336b674 with catch @ 0336b874 */
                    /* catch() { ... } // from try @ 0336b858 with catch @ 0336b878 */
  auVar5 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_TypeInfo);
  pNVar1 = auVar5._0_8_;
                    /* catch() { ... } // from try @ 0336b854 with catch @ 0336b87c */
                    /* catch() { ... } // from try @ 0336b6a8 with catch @ 0336b880 */
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH___ctor(pNVar1,auVar5._8_8_);
  ppNVar2 = &(__this->fields)._OnStateChange;
                    /* catch() { ... } // from try @ 0336b684 with catch @ 0336b884 */
                    /* catch() { ... } // from try @ 0336b658 with catch @ 0336b888 */
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  auVar5 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH_TypeInfo);
  pNVar1 = auVar5._0_8_;
                    /* try { // try from 0336b8a0 to 0346b8a3 has its CatchHandler @ 0336b8c4 */
  Nekki_SF2_GUI_Shop_SidePanel_IAHNGLHCFOH___ctor(pNVar1,auVar5._8_8_);
  ppNVar2 = &(__this->fields)._OnMove;
                    /* try { // try from 0336b8a4 to 0346b8cb has its CatchHandler @ 0336b574 */
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
                    /* catch() { ... } // from try @ 0336b8a0 with catch @ 0336b8c4 */
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragBegin;
                    /* try { // try from 0336b8cc to 0346b8d3 has its CatchHandler @ 0336b8e8 */
  *ppUVar4 = pUVar3;
                    /* try { // try from 0336b8d4 to 0346b8df has its CatchHandler @ 0336b574 */
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
                    /* try { // try from 0336b8e0 to 0346b8e7 has its CatchHandler @ 0336b8e8 */
                    /* catch() { ... } // from try @ 0336b8cc with catch @ 0336b8e8
                       catch() { ... } // from try @ 0336b8e0 with catch @ 0336b8e8 */
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnDragEnd;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  (__this->fields).DBNELADJPIJ = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

