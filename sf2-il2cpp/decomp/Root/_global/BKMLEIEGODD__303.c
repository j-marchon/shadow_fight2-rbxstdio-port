// TypeDefIndex 303
// Namespace: 
// public class BKMLEIEGODD : BOFEMGGNODC
// Fields:
//   private string PKBMGDECOPP; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x32396B4]
// BKMLEIEGODD$$HNIHOIAMDPC @ RVA 0x32396B4

void BKMLEIEGODD__HNIHOIAMDPC
               (BKMLEIEGODD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567048 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12838/*"Target"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567048 = 1;
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


// ===== public void .ctor()  [RVA 0x3239760]
// BKMLEIEGODD$$.ctor @ RVA 0x3239760

void BKMLEIEGODD___ctor(BKMLEIEGODD_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3239768]
// BKMLEIEGODD$$MAHFCKJGBPP @ RVA 0x3239768

void BKMLEIEGODD__MAHFCKJGBPP(BKMLEIEGODD_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04567049 & 1) == 0) {
    FUN_01bab630(&Method_BOFEMGGNODC_GIPCDAILIHJ<TutorialControl>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10611/*"QADeactivateControl: can't find TutorialControl by target '{0}'!"*/);
    DAT_04567049 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).PKBMGDECOPP;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
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
LAB_03339904:
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_10611/*"QADeactivateControl: can't find TutorialControl by target '{0}'!"*/,args,(MethodInfo *)0x0);
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_03339904;
    *(undefined1 *)&x[1].monitor = 0;
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

