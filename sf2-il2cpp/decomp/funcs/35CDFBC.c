// Nekki.SF2.GUI.BaseScrollContent$$.ctor @ RVA 0x35CDFBC

void Nekki_SF2_GUI_BaseScrollContent___ctor
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this_00;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o **ppNVar1;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this_01;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o **ppNVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_02;
  System_Collections_Generic_List_BaseScrollItem__o **ppSVar3;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
                    /* try { // try from 036cdfbc to 037ce003 has its CatchHandler @ 036cd9d8 */
                    /* catch() { ... } // from try @ 036cdfb8 with catch @ 036cdfc4 */
                    /* catch() { ... } // from try @ 036cdfac with catch @ 036cdfc8 */
                    /* catch() { ... } // from try @ 036cdca8 with catch @ 036cdfcc */
                    /* catch() { ... } // from try @ 036cdc58 with catch @ 036cdfd0 */
                    /* catch() { ... } // from try @ 036cdf90 with catch @ 036cdfd4 */
                    /* catch() { ... } // from try @ 036cdfa0 with catch @ 036cdfd8 */
                    /* catch() { ... } // from try @ 036cdf8c with catch @ 036cdfdc */
                    /* catch() { ... } // from try @ 036cde1c with catch @ 036cdfe0 */
                    /* catch() { ... } // from try @ 036cdbfc with catch @ 036cdfe4 */
  if ((DAT_04568fba & 1) == 0) {
                    /* catch() { ... } // from try @ 036cddc0 with catch @ 036cdfe8 */
                    /* catch() { ... } // from try @ 036cdba0 with catch @ 036cdfec */
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
                    /* try { // try from 036ce004 to 037ce007 has its CatchHandler @ 036ce014 */
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
                    /* catch() { ... } // from try @ 036ce004 with catch @ 036ce014 */
    FUN_01bab630(&Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_TypeInfo);
                    /* try { // try from 036ce01c to 037ce08f has its CatchHandler @ 036ce140 */
    DAT_04568fba = 1;
    method = extraout_x1;
  }
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_TypeInfo,method);
  __this_00 = auVar4._0_8_;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent___ctor(__this_00,auVar4._8_8_);
  ppNVar1 = &(__this->fields).onSelectItem;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_TypeInfo);
  __this_01 = auVar4._0_8_;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent___ctor(__this_01,auVar4._8_8_);
  ppNVar2 = &(__this->fields).onClickItem;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
                    /* catch() { ... } // from try @ 036cdf98 with catch @ 036ce090
                       try { // try from 036ce090 to 037ce0ab has its CatchHandler @ 036cd9d8 */
                    /* catch() { ... } // from try @ 036cde84 with catch @ 036ce094 */
  (__this->fields)._additionalContentSize.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
                    /* try { // try from 036ce0ac to 037ce0af has its CatchHandler @ 036ce0bc */
  __this_02 = (System_Collections_Generic_List_BaseScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
  ppSVar3 = &(__this->fields)._Items;
                    /* catch() { ... } // from try @ 036ce0ac with catch @ 036ce0bc */
  *ppSVar3 = __this_02;
                    /* try { // try from 036ce0c4 to 037ce12b has its CatchHandler @ 036ce140 */
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

