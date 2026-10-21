// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionSetEnergy  (obfuscated OJFOEAFKDEL)
// TypeDefIndex 3129
// Namespace: 
// public class QuestActionSetEnergy : QuestAction
// Fields:
//   private int PCNEDMAJMOJ; // 0x64

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34D2470]
// QuestActionSetEnergy$$MAHFCKJGBPP @ RVA 0x34D2470

void QuestActionSetEnergy__MAHFCKJGBPP(QuestActionSetEnergy_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t val1;
  int32_t iVar1;
  Roster_o *__this_00;
  
  if ((DAT_045686bf & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045686bf = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    iVar1 = (__this_00->fields).BNDNKEHPKEO;
    val1 = *(int32_t *)&(__this->fields).super.field_0x54;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = System_Math__Min(val1,iVar1,(MethodInfo *)0x0);
    Roster__KBKGBCEGIJF(__this_00,iVar1,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34D2574]
// QuestActionSetEnergy$$.ctor @ RVA 0x34D2574

void QuestActionSetEnergy___ctor(QuestActionSetEnergy_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x34D257C]
// QuestActionSetEnergy$$HNIHOIAMDPC @ RVA 0x34D257C

void QuestActionSetEnergy__HNIHOIAMDPC
               (QuestActionSetEnergy_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  if ((DAT_045686c0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10662/*"QuestActionSetEnergy::parse - wrong value: {0}, setting to 0"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_045686c0 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar1;
      if (iVar1 < 0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_24 = *(undefined4 *)&(__this->fields).super.field_0x54;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
        if (args == (System_Object_array *)0x0) goto LAB_035d26e4;
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items,pIVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10662/*"QuestActionSetEnergy::parse - wrong value: {0}, setting to 0"*/,args,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).super.field_0x54 = 0;
      }
      return;
    }
  }
LAB_035d26e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

