// TypeDefIndex 2973
// Namespace: 
// public class MADFGOOGMDP : QuestAction
// Fields:
//   private List<QuestCondition> KDIMDBHMBEM; // 0x68
//   private LCKCDEKNLOA EBLHLBLOFLM; // 0x70
//   private LCKCDEKNLOA HLDPKMBOAPA; // 0x78

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34A0044]
// MADFGOOGMDP$$MAHFCKJGBPP @ RVA 0x34A0044

void MADFGOOGMDP__MAHFCKJGBPP(MADFGOOGMDP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  bVar1 = MADFGOOGMDP__DGCODECJJCC(__this,AAJBIMFNMBB,method_00);
  if (bVar1) {
    __this_00 = (__this->fields).EBLHLBLOFLM;
  }
  else {
    __this_00 = (__this->fields).HLDPKMBOAPA;
  }
  if (__this_00 == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  LCKCDEKNLOA__MAHFCKJGBPP(__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
  return;
}


// ===== private void NDJAJHFFPKP()  [RVA 0x34A021C]
// MADFGOOGMDP$$NDJAJHFFPKP @ RVA 0x34A021C

void MADFGOOGMDP__NDJAJHFFPKP(MADFGOOGMDP_o *__this,MethodInfo *method)

{
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x34A0224]
// MADFGOOGMDP$$PKIFMKGDJJN @ RVA 0x34A0224

void MADFGOOGMDP__PKIFMKGDJJN(MADFGOOGMDP_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).EBLHLBLOFLM;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).HLDPKMBOAPA;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A025C]
// MADFGOOGMDP$$.ctor @ RVA 0x34A025C

void MADFGOOGMDP___ctor(MADFGOOGMDP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  LCKCDEKNLOA_o *pLVar2;
  LCKCDEKNLOA_o **ppLVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568491 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<QuestCondition>_TypeInfo);
    DAT_04568491 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<QuestCondition>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<QuestCondition>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pLVar2 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).EBLHLBLOFLM;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  pLVar2 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).HLDPKMBOAPA;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x34A0340]
// MADFGOOGMDP$$HNIHOIAMDPC @ RVA 0x34A0340

void MADFGOOGMDP__HNIHOIAMDPC
               (MADFGOOGMDP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  undefined8 uVar1;
  undefined8 uVar2;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_04568492 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_MADFGOOGMDP_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_13626/*"Then"*/);
    FUN_01bab630(&StringLiteral_10650/*"QuestActionCondition.QuestStage is null before running Parse()"*/);
    FUN_01bab630(&StringLiteral_5679/*"Else"*/);
    DAT_04568492 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if ((__this->fields).super._AFGEOOAHIGH_k__BackingField == (FPPKHNNABAD_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10650/*"QuestActionCondition.QuestStage is null before running Parse()"*/,(MethodInfo *)0x0);
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    IIBFFEPEHPF = (System_Xml_XmlNode_o *)
                  (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                            (NPLGCIFGFOK,StringLiteral_4577/*"Conditions"*/,
                             (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF,(__this->fields).KDIMDBHMBEM,(MethodInfo *)0x0);
    uVar1 = (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                      (NPLGCIFGFOK,StringLiteral_13626/*"Then"*/,
                       (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).EBLHLBLOFLM;
    uVar2 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
              (__this,uVar1,pLVar3,uVar2,(__this->klass->vtable)._6_IEFEBMICIHN.method);
    uVar1 = (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                      (NPLGCIFGFOK,StringLiteral_5679/*"Else"*/,
                       (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).HLDPKMBOAPA;
    uVar2 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
                    /* WARNING: Could not recover jumptable at 0x035a0520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
              (__this,uVar1,pLVar3,uVar2,(__this->klass->vtable)._6_IEFEBMICIHN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool DGCODECJJCC(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34A00AC]
// MADFGOOGMDP$$DGCODECJJCC @ RVA 0x34A00AC

bool MADFGOOGMDP__DGCODECJJCC(MADFGOOGMDP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568493 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestCondition>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestCondition>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestCondition>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>_GetEnumerator__);
    DAT_04568493 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<QuestCondition>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<QuestCondition>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_035a016c;
    }
    if ((QuestCondition_o *)local_38.fields._current == (QuestCondition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = QuestCondition__DGCODECJJCC
                      ((QuestCondition_o *)local_38.fields._current,AAJBIMFNMBB,(MethodInfo *)0x0);
  } while (bVar1);
  iVar2 = 4;
LAB_035a016c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<QuestCondition>_Dispose__);
  return iVar2 != 4;
}

