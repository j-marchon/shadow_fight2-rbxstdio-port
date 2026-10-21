// TypeDefIndex 509
// Namespace: 
// public class NENOHHACMFD : BOFEMGGNODC
// Fields:
//   private string PKBMGDECOPP; // 0x68

// ===== public void .ctor()  [RVA 0x358EE78]
// NENOHHACMFD$$.ctor @ RVA 0x358EE78

void NENOHHACMFD___ctor(NENOHHACMFD_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x358EE80]
// NENOHHACMFD$$HNIHOIAMDPC @ RVA 0x358EE80

void NENOHHACMFD__HNIHOIAMDPC
               (NENOHHACMFD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568d64 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12838/*"Target"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d64 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12838/*"Target"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).PKBMGDECOPP;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x358EF2C]
// NENOHHACMFD$$MAHFCKJGBPP @ RVA 0x358EF2C

void NENOHHACMFD__MAHFCKJGBPP(NENOHHACMFD_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568d65 & 1) == 0) {
    FUN_01bab630(&Method_BOFEMGGNODC_GIPCDAILIHJ<TutorialControl>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10606/*"QAActivateControl: can't find TutorialControl by target '{0}'!"*/);
    DAT_04568d65 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).PKBMGDECOPP;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0368efe8 to 0378f127 has its CatchHandler @ 0368efe8
                       catch() { ... } // from try @ 0368efe8 with catch @ 0368efe8
                       catch() { ... } // from try @ 0368f148 with catch @ 0368efe8
                       catch() { ... } // from try @ 0368f188 with catch @ 0368efe8
                       catch() { ... } // from try @ 0368f200 with catch @ 0368efe8
                       catch() { ... } // from try @ 0368f2a0 with catch @ 0368efe8
                       catch() { ... } // from try @ 0368f2c0 with catch @ 0368efe8
                       catch() { ... } // from try @ 0368f300 with catch @ 0368efe8 */
  x = (UnityEngine_Object_o *)
      BOFEMGGNODC__GIPCDAILIHJ<object>
                ((BOFEMGGNODC_o *)__this,pSVar4,Method_BOFEMGGNODC_GIPCDAILIHJ<TutorialControl>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
LAB_0368f0cc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar4;
    thunk_FUN_01c20e04(args->m_Items,pSVar4);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_10606/*"QAActivateControl: can't find TutorialControl by target '{0}'!"*/,args,(MethodInfo *)0x0);
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_0368f0cc;
    *(undefined1 *)&x[1].monitor = 1;
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

