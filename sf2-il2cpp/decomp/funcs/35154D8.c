// Nekki.SF2.GUI.Common.Hints.HintList$$get_DescriptionAlias @ RVA 0x35154D8

System_String_o *
Nekki_SF2_GUI_Common_Hints_HintList__get_DescriptionAlias
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  bool_conflict *pbVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456891f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456891f = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03615534 to 03715537 has its CatchHandler @ 03615540 */
                    /* try { // try from 03615538 to 0371555f has its CatchHandler @ 03615234 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615534 with catch @ 03615540
                        */
    pNVar3 = (__this->fields)._Description;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615370 with catch @ 03615544
                        */
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615358 with catch @ 03615548
                        */
    pbVar2 = &(pNVar3->fields)._useLabelLineSpacing;
  }
  else {
    pbVar2 = (bool_conflict *)&StringLiteral_1;
  }
                    /* try { // try from 03615560 to 03715563 has its CatchHandler @ 0361558c */
                    /* try { // try from 03615564 to 0371559b has its CatchHandler @ 03615234 */
  return *(System_String_o **)pbVar2;
}

