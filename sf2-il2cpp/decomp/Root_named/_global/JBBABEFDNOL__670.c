// TypeDefIndex 670
// Namespace: 
// public class JBBABEFDNOL : QuestAction
// Fields:
//   private string DEKCPPOJFEH; // 0x68

// ===== public void .ctor()  [RVA 0x3026AB0]
// JBBABEFDNOL$$.ctor @ RVA 0x3026AB0

void JBBABEFDNOL___ctor(JBBABEFDNOL_o *__this,MethodInfo *method)

{
  if ((DAT_04565c94 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565c94 = 1;
  }
  (__this->fields).DEKCPPOJFEH = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3026B10]
// JBBABEFDNOL$$MAHFCKJGBPP @ RVA 0x3026B10

void JBBABEFDNOL__MAHFCKJGBPP(JBBABEFDNOL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  byte bVar1;
  QuestCondition_o *__this_00;
  PKHMIGFEJCL_o **ppPVar2;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  DNELIPCHKLK_o *__this_02;
  MEJIKMPNBNL_o *__this_03;
  OHDDKGHEEPA_o *AOMBONOOJFP;
  System_String_o *pSVar3;
  
                    /* try { // try from 03126b30 to 03226b37 has its CatchHandler @ 03126d94 */
  if ((DAT_04565c95 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
                    /* try { // try from 03126b44 to 03226b53 has its CatchHandler @ 03126d88 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_22313/*"{0} is not a raid zone"*/);
                    /* try { // try from 03126b8c to 03226bb7 has its CatchHandler @ 03126d98 */
    DAT_04565c95 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
  QuestCondition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (QuestCondition_o *)0x0) {
    ppPVar2 = &(__this_00->fields).AAJBIMFNMBB;
                    /* try { // try from 03126bbc to 03226bc7 has its CatchHandler @ 03126d90 */
                    /* try { // try from 03126bc8 to 03226d73 has its CatchHandler @ 031269b8 */
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).DEKCPPOJFEH,__this_01,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_02 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_02,(MethodInfo *)0x0);
    if ((__this_01 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) && (__this_02 != (DNELIPCHKLK_o *)0x0)) {
      DNELIPCHKLK__LGOFNFEIKFB(__this_02,(__this_01->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
      pSVar3 = (__this_02->fields).GDPFBDIJNHA;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_03 = NLPJLHOEAOE__KHHBHBLIANB(pSVar3,(MethodInfo *)0x0);
      if ((__this_03 == (MEJIKMPNBNL_o *)0x0) ||
         (AOMBONOOJFP = (OHDDKGHEEPA_o *)
                        MEJIKMPNBNL__KKPHCCBPIMN
                                  (__this_03,(__this_02->fields).GJFJPLHCBKJ,(MethodInfo *)0x0),
         AOMBONOOJFP == (OHDDKGHEEPA_o *)0x0)) {
        pSVar3 = System_String__Format
                           (StringLiteral_22313/*"{0} is not a raid zone"*/,(Il2CppObject *)__this_03,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      }
      else {
        bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
        if (((AOMBONOOJFP->klass->_2).naturalAligment < bVar1) ||
           ((AOMBONOOJFP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        DialogsOpener__NFKLNBFKKLF(AOMBONOOJFP,(MethodInfo *)0x0);
      }
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3026D20]
// JBBABEFDNOL$$HNIHOIAMDPC @ RVA 0x3026D20

void JBBABEFDNOL__HNIHOIAMDPC
               (JBBABEFDNOL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565c96 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04565c96 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03126d74 to 03226d77 has its CatchHandler @ 03126d8c */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03126d78 to 03226d7b has its CatchHandler @ 03126d84 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03126d7c to 03226d7f has its CatchHandler @ 03126d80 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126d7c with catch @ 03126d80
                       try { // try from 03126d80 to 03226daf has its CatchHandler @ 031269b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126d78 with catch @ 03126d84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126b44 with catch @ 03126d88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126d74 with catch @ 03126d8c
                        */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126bbc with catch @ 03126d90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126b30 with catch @ 03126d94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126b8c with catch @ 03126d98
                        */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03126db0 to 03226db3 has its CatchHandler @ 03126dd4 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03126db4 to 03226ddb has its CatchHandler @ 031269b8 */
  FUN_01bab8c8();
}

