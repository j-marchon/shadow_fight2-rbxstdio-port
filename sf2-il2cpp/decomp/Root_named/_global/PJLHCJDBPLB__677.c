// TypeDefIndex 677
// Namespace: 
// public class PJLHCJDBPLB : QuestAction
// Fields:
//   private string KKPKGEFBCGA; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x302F6B0]
// PJLHCJDBPLB$$HNIHOIAMDPC @ RVA 0x302F6B0

void PJLHCJDBPLB__HNIHOIAMDPC
               (PJLHCJDBPLB_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565cec & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04565cec = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).KKPKGEFBCGA;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x302F748]
// PJLHCJDBPLB$$.ctor @ RVA 0x302F748

void PJLHCJDBPLB___ctor(PJLHCJDBPLB_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x302F750]
// PJLHCJDBPLB$$MAHFCKJGBPP @ RVA 0x302F750

void PJLHCJDBPLB__MAHFCKJGBPP(PJLHCJDBPLB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *method_00;
  Il2CppClass *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_String_o *pSVar7;
  
  if ((DAT_04565ced & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565ced = 1;
  }
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar7 = (__this->fields).KKPKGEFBCGA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar7,method_00);
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar4 = pIVar2->klass;
  uVar1._0_1_ = (pIVar4->_2).rank;
  uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar3 = pIVar4->vtable + (*piVar6 + 9);
        goto LAB_0312f84c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,9);
LAB_0312f84c:
  (*pVVar3->methodPtr)(pIVar2,pSVar7,1,1,pVVar3->method);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

