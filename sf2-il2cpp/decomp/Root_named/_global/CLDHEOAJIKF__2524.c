// TypeDefIndex 2524
// Namespace: 
// public class CLDHEOAJIKF : QuestAction
// Fields:
//   private string LAHMLCJODCF; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x338F484]
// CLDHEOAJIKF$$HNIHOIAMDPC @ RVA 0x338F484

void CLDHEOAJIKF__HNIHOIAMDPC
               (CLDHEOAJIKF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567c0f & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_17862/*"dojo"*/);
    DAT_04567c0f = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_17862/*"dojo"*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).LAHMLCJODCF;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x338F530]
// CLDHEOAJIKF$$.ctor @ RVA 0x338F530

void CLDHEOAJIKF___ctor(CLDHEOAJIKF_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x338F538]
// CLDHEOAJIKF$$OFPHPMGMCAL @ RVA 0x338F538

System_String_o * CLDHEOAJIKF__OFPHPMGMCAL(CLDHEOAJIKF_o *__this,MethodInfo *method)

{
  return (__this->fields).LAHMLCJODCF;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x338F540]
// CLDHEOAJIKF$$MAHFCKJGBPP @ RVA 0x338F540

void CLDHEOAJIKF__MAHFCKJGBPP(CLDHEOAJIKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  HJNDPNIMBBG_o *__this_00;
  System_String_o *str1;
  System_String_o **ppSVar3;
  
  if ((DAT_04567c10 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    FUN_01bab630(&StringLiteral_17862/*"dojo"*/);
    FUN_01bab630(&StringLiteral_320/*" Set DEFAULT location"*/);
    FUN_01bab630(&StringLiteral_15013/*"Wrong dojo location name "*/);
    FUN_01bab630(&StringLiteral_11881/*"Set dojo location to : "*/);
    DAT_04567c10 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields).LAHMLCJODCF;
  pSVar2 = Location__DELGACJHIMA(*ppSVar3,(MethodInfo *)0x0);
  pSVar2 = CMEBCBKGFFL__NFBODKMCAMM(pSVar2,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)
      UnityEngine_ResourcesAndBundles__Load<object>
                (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_15013/*"Wrong dojo location name "*/,*ppSVar3,StringLiteral_320/*" Set DEFAULT location"*/,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    ppSVar3 = (System_String_o **)&StringLiteral_17862/*"dojo"*/;
  }
  str1 = *ppSVar3;
  pSVar2 = System_String__Concat(StringLiteral_11881/*"Set dojo location to : "*/,str1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7e == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7e = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
  if (__this_00 != (HJNDPNIMBBG_o *)0x0) {
    HJNDPNIMBBG__LAPNHIJGIGH(__this_00,str1,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

