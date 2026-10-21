// Nekki.SF2.GUI.Shop.PerksPanel$$get_RectTransform @ RVA 0x336FF80

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Shop_PerksPanel__get_RectTransform
          (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o **ppUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_04567b0f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0346ffbc to 0356ffbf has its CatchHandler @ 0346ffe4 */
                    /* try { // try from 0346ffc0 to 0356ffc3 has its CatchHandler @ 0346ffe0 */
    DAT_04567b0f = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0346ffc4 to 0356ffc7 has its CatchHandler @ 0346ffdc */
  ppUVar2 = &(__this->fields).AOBAKMPHNKF;
                    /* try { // try from 0346ffc8 to 03570003 has its CatchHandler @ 0346f9fc */
  pUVar3 = *ppUVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ff0c with catch @ 0346ffd4
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ff1c with catch @ 0346ffd8
                        */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ffc4 with catch @ 0346ffdc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ffc0 with catch @ 0346ffe0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ffbc with catch @ 0346ffe4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346fef8 with catch @ 0346ffe8
                        */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346ff28 with catch @ 0346ffec
                        */
  if (bVar1) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
                    /* try { // try from 03470004 to 03570007 has its CatchHandler @ 03470028 */
                    /* try { // try from 03470008 to 0357002f has its CatchHandler @ 0346f9fc */
    (__this->fields).AOBAKMPHNKF = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}

