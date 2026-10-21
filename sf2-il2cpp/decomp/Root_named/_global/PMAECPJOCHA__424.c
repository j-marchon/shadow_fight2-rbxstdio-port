// TypeDefIndex 424
// Namespace: 
// public class PMAECPJOCHA : QuestAction
// Fields:
//   private string CMEAHLHBGMN; // 0x68

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL HLAGOHADLKH)  [RVA 0x348A324]
// PMAECPJOCHA$$MAHFCKJGBPP @ RVA 0x348A324

void PMAECPJOCHA__MAHFCKJGBPP(PMAECPJOCHA_o *__this,PKHMIGFEJCL_o *HLAGOHADLKH,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_Nullable_float__Fields KOJMJNBCDOH;
  Fight_o *__this_00;
  System_String_o *pSVar1;
  float value;
  System_Nullable_float__Fields local_28;
  
  if ((DAT_045683d4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_20);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3664);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    DAT_045683d4 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,HLAGOHADLKH,(MethodInfo *)0x0);
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3664,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_20,(MethodInfo *)0x0);
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (__this->fields).CMEAHLHBGMN;
  __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (pSVar1 == (System_String_o *)0x0) {
    KOJMJNBCDOH.hasValue = false;
    KOJMJNBCDOH._1_3_ = 0;
    KOJMJNBCDOH.value = 0.0;
  }
  else {
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = MFBNFJGBPBB__DCIAJFJIMNK(HLAGOHADLKH,pSVar1,(MethodInfo *)0x0);
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_28,value,Method_System_Nullable<float>__ctor__);
    KOJMJNBCDOH = local_28;
  }
  if (__this_00 != (Fight_o *)0x0) {
    Fight__MHKENGKHDKD(__this_00,(System_Nullable_float__o)KOJMJNBCDOH,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x348A574]
// PMAECPJOCHA$$.ctor @ RVA 0x348A574

void PMAECPJOCHA___ctor(PMAECPJOCHA_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x348A57C]
// PMAECPJOCHA$$HNIHOIAMDPC @ RVA 0x348A57C

void PMAECPJOCHA__HNIHOIAMDPC
               (PMAECPJOCHA_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045683d5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10318/*"PlayerLife"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_045683d5 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_10318/*"PlayerLife"*/,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0358a658;
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10318/*"PlayerLife"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
    }
    if (__this != (PMAECPJOCHA_o *)0x0) {
      ppSVar4 = &(__this->fields).CMEAHLHBGMN;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4);
      return;
    }
  }
LAB_0358a658:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

