// TypeDefIndex 2845
// Namespace: 
// public class LJAPFDJNGGA : QuestAction
// Fields:
//   private string EEACPKHFLAM; // 0x68
//   private bool IIBFFJPIBHG; // 0x70
//   private bool PBKPFBNFIHH; // 0x71
//   private bool DJAALDCHPOJ; // 0x72
//   private bool NBGPKFHLCOG; // 0x73

// ===== public void .ctor()  [RVA 0x34315C4]
// LJAPFDJNGGA$$.ctor @ RVA 0x34315C4

void LJAPFDJNGGA___ctor(LJAPFDJNGGA_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x34315CC]
// LJAPFDJNGGA$$HNIHOIAMDPC @ RVA 0x34315CC

void LJAPFDJNGGA__HNIHOIAMDPC
               (LJAPFDJNGGA_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568170 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5694/*"Enable"*/);
    FUN_01bab630(&StringLiteral_7610/*"Interactable"*/);
    FUN_01bab630(&StringLiteral_12838/*"Target"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568170 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_12838/*"Target"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).EEACPKHFLAM = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5694/*"Enable"*/,(MethodInfo *)0x0);
        (__this->fields).PBKPFBNFIHH = pSVar3 != (System_Xml_XmlAttribute_o *)0x0;
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03531778;
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5694/*"Enable"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
          (__this->fields).NBGPKFHLCOG = bVar1;
        }
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_7610/*"Interactable"*/,(MethodInfo *)0x0);
          (__this->fields).IIBFFJPIBHG = pSVar3 != (System_Xml_XmlAttribute_o *)0x0;
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03531778;
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_7610/*"Interactable"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
            (__this->fields).DJAALDCHPOJ = bVar1;
          }
          return;
        }
      }
    }
  }
LAB_03531778:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x343177C]
// LJAPFDJNGGA$$MAHFCKJGBPP @ RVA 0x343177C

void LJAPFDJNGGA__MAHFCKJGBPP(LJAPFDJNGGA_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *__this_00;
  System_Object_array *args;
  long lVar2;
  UnityEngine_GameObject_o *__this_01;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568171 & 1) == 0) {
    FUN_01bab630(&Method_BOFEMGGNODC_GIPCDAILIHJ<Button>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10607/*"QAChangeButtonState: can't find Button by target '{0}'!"*/);
    DAT_04568171 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).EEACPKHFLAM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_UI_Selectable_o *)
              QuestAction__GIPCDAILIHJ<object>
                        ((QuestAction_o *)__this,pSVar4,Method_BOFEMGGNODC_GIPCDAILIHJ<Button>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
LAB_03531954:
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_10607/*"QAChangeButtonState: can't find Button by target '{0}'!"*/,args,(MethodInfo *)0x0);
  }
  else {
    if ((__this->fields).PBKPFBNFIHH != false) {
      if ((__this_00 == (UnityEngine_UI_Selectable_o *)0x0) ||
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03531954;
      UnityEngine_GameObject__SetActive(__this_01,(__this->fields).NBGPKFHLCOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).IIBFFJPIBHG != false) {
      if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03531954;
      UnityEngine_UI_Selectable__set_interactable
                (__this_00,(__this->fields).DJAALDCHPOJ,(MethodInfo *)0x0);
    }
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

