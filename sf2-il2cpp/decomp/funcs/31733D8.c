// KFHBBNGEAAN$$NCGAMIBJPMH @ RVA 0x31733D8

void KFHBBNGEAAN__NCGAMIBJPMH(KFHBBNGEAAN_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  UnityEngine_Object_o *obj;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  UnityEngine_RectTransform_o **ppUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  
  if ((DAT_0456693e & 1) == 0) {
                    /* try { // try from 03273400 to 03373403 has its CatchHandler @ 03273598 */
                    /* try { // try from 03273408 to 03373437 has its CatchHandler @ 032735c8 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12239);
    DAT_0456693e = 1;
    method = extraout_x1;
  }
  ppUVar5 = &(__this->fields).NDPOMFMHCMB;
  pUVar6 = *ppUVar5;
                    /* try { // try from 03273444 to 0337344b has its CatchHandler @ 032735ac */
  iVar1 = (__this->fields).FLDDAODOMLC;
  iVar2 = (__this->fields).JLDNANEPIJI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  if (iVar1 < iVar2) {
                    /* try { // try from 03273464 to 0337346b has its CatchHandler @ 032735bc */
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
                    /* catch() { ... } // from try @ 0327358c with catch @ 03273590
                       try { // try from 03273590 to 033735df has its CatchHandler @ 03273364 */
                    /* catch() { ... } // from try @ 03273488 with catch @ 03273594 */
                    /* catch() { ... } // from try @ 03273400 with catch @ 03273598 */
                    /* catch() { ... } // from try @ 03273534 with catch @ 0327359c */
                    /* catch() { ... } // from try @ 032734b4 with catch @ 032735a0 */
      return;
    }
    pUVar4 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 03273488 to 0337348b has its CatchHandler @ 03273594 */
                    /* try { // try from 03273490 to 03373497 has its CatchHandler @ 032735b0 */
    UnityEngine_GameObject___ctor(pUVar4,StringLiteral_12239,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      __this_01 = (__this->fields).PDHMLFAMNCO;
                    /* try { // try from 032734b4 to 033734b7 has its CatchHandler @ 032735a0 */
                    /* try { // try from 032734bc to 033734c3 has its CatchHandler @ 032735b8 */
      if ((__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
         (p = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
                    /* try { // try from 032734d4 to 033734db has its CatchHandler @ 032735a4 */
        pUVar6 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__AddComponent<object>
                           (pUVar4,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
        *ppUVar5 = pUVar6;
LAB_0327357c:
                    /* try { // try from 0327357c to 0337357f has its CatchHandler @ 032735c0 */
                    /* try { // try from 03273580 to 03373583 has its CatchHandler @ 032735c8 */
                    /* try { // try from 03273584 to 03373587 has its CatchHandler @ 032735b4 */
                    /* try { // try from 03273588 to 0337358b has its CatchHandler @ 032735a8 */
                    /* try { // try from 0327358c to 0337358f has its CatchHandler @ 03273590 */
        thunk_FUN_01c20e04(ppUVar5,pUVar6);
        return;
      }
    }
  }
  else {
                    /* try { // try from 032734fc to 03373513 has its CatchHandler @ 032735cc */
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      return;
    }
    if ((*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppUVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      if (*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03273534 to 0337354f has its CatchHandler @ 0327359c */
        UnityEngine_Transform__SetParent
                  ((UnityEngine_Transform_o *)*ppUVar5,(UnityEngine_Transform_o *)0x0,
                   (MethodInfo *)0x0);
        if (*ppUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)*ppUVar5,(MethodInfo *)0x0);
                    /* try { // try from 03273554 to 03373567 has its CatchHandler @ 032735cc */
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
          pUVar6 = (UnityEngine_RectTransform_o *)0x0;
          *ppUVar5 = (UnityEngine_RectTransform_o *)0x0;
          goto LAB_0327357c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032734d4 with catch @ 032735a4 */
  FUN_01bab8c8();
}

