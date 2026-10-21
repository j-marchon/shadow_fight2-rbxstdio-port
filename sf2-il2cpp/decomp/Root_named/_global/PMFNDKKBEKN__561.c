// TypeDefIndex 561
// Namespace: 
// public class PMFNDKKBEKN : OOMHDDBCBJP
// Fields:
//   private const int LKDMGBDADPG = 123;
//   private readonly List<Rule> LJNCACBBIBD; // 0xC8
//   private readonly List<List<Rule>> CIDEKAHPIGK; // 0xD0
//   private readonly List<ModelParameters> PKBACCIJGGD; // 0xD8
//   private readonly List<List<ModelParameters>> PLIMKHBGKED; // 0xE0
//   private bool HPJIEODKHEH; // 0xE8

// ===== private void MHEAEPPIFFL()  [RVA 0x35AAA6C]
// PMFNDKKBEKN$$MHEAEPPIFFL @ RVA 0x35AAA6C

void PMFNDKKBEKN__MHEAEPPIFFL(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  if ((__this->fields).super.KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
                    /* WARNING: Could not recover jumptable at 0x036aaaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._19_JDGBDDAIJNK.methodPtr)
            (__this,2,(__this->klass->vtable)._19_JDGBDDAIJNK.method);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35AAAA8]
// PMFNDKKBEKN$$HNIHOIAMDPC @ RVA 0x35AAAA8

/* WARNING: Removing unreachable block (ram,0x036aae38) */

void PMFNDKKBEKN__HNIHOIAMDPC
               (PMFNDKKBEKN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_String_o *a;
  NLPJLHOEAOE_o *__this_00;
  ModelParameters_o *item;
  long lVar7;
  ModelParameters_array *pPVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  
  if ((DAT_04568e4f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14862/*"Warriors"*/);
    FUN_01bab630(&StringLiteral_11462/*"Rules"*/);
    FUN_01bab630(&StringLiteral_14859/*"Warrior"*/);
    DAT_04568e4f = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11462/*"Rules"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    RuleParser__FAEKHJHILGP(pSVar4,(__this->fields).LJNCACBBIBD,(MethodInfo *)0x0);
    plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_14862/*"Warriors"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_036aac34;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_036aac34:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_036aadd0;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_036aadb8;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_036aac94;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_036aac94:
        pSVar4 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (pSVar4 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
           ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4);
        }
        a = (System_String_o *)
            (*(pSVar4->klass->vtable)._8_unknown.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_14859/*"Warrior"*/,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = (__this->fields).PKBACCIJGGD;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item = NLPJLHOEAOE__MDEGKNMDKPN
                           (__this_00,pSVar4,(ModelParameters_o *)0x0,false,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<ModelParameters>_Add__;
          if (__this_01 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pPVar8 == (ModelParameters_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pPVar8->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pPVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036aadb8:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036aadec;
    }
  }
LAB_036aadd0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_036aadec:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private void PNANEMPIKKI(uint AMGKACBECJJ, uint HEMLOJDNHAJ)  [RVA 0x35AAF18]
// PMFNDKKBEKN$$PNANEMPIKKI @ RVA 0x35AAF18

void PMFNDKKBEKN__PNANEMPIKKI
               (PMFNDKKBEKN_o *__this,uint32_t AMGKACBECJJ,uint32_t HEMLOJDNHAJ,MethodInfo *method)

{
  OLKPEJMEBPJ_o *pOVar1;
  
  pOVar1 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar1 == (OLKPEJMEBPJ_o *)0x0) {
    return;
  }
  OLKPEJMEBPJ__HMMOOLJEJOJ(pOVar1,(ulong)AMGKACBECJJ,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar1 != (OLKPEJMEBPJ_o *)0x0) {
    OLKPEJMEBPJ__CPIINGDCHIH(pOVar1,(ulong)HEMLOJDNHAJ,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override FightList INCIBBGABCB(string KGLJICLJHEL)  [RVA 0x35AAF68]
// PMFNDKKBEKN$$INCIBBGABCB @ RVA 0x35AAF68

FightList_o *
PMFNDKKBEKN__INCIBBGABCB(PMFNDKKBEKN_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  FightList_o *pAVar1;
  
  pAVar1 = OOMHDDBCBJP__PFAOOMAGCHN((OOMHDDBCBJP_o *)__this,KGLJICLJHEL,(MethodInfo *)0x0);
  if (pAVar1 == (FightList_o *)0x0) {
    if ((__this->fields).super.KANKFCNHDPA == false) {
                    /* try { // try from 036aafa8 to 037aafaf has its CatchHandler @ 036ab008 */
      (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
                (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
      pAVar1 = OOMHDDBCBJP__PFAOOMAGCHN((OOMHDDBCBJP_o *)__this,KGLJICLJHEL,(MethodInfo *)0x0);
      return pAVar1;
    }
    pAVar1 = (FightList_o *)0x0;
  }
                    /* catch() { ... } // from try @ 036ab004 with catch @ 036aaf98
                       catch() { ... } // from try @ 036ab040 with catch @ 036aaf98
                       catch() { ... } // from try @ 036ab0ac with catch @ 036aaf98
                       catch() { ... } // from try @ 036ab0b8 with catch @ 036aaf98 */
  return pAVar1;
}


// ===== public override void PEOJNPEINED()  [RVA 0x35AAFC4]
// PMFNDKKBEKN$$PEOJNPEINED @ RVA 0x35AAFC4

void PMFNDKKBEKN__PEOJNPEINED(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  OOMHDDBCBJP__PEOJNPEINED((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 036aafdc to 037aafe7 has its CatchHandler @ 036ab010 */
  PMFNDKKBEKN__HHFGOAJKCLG(__this,method_00);
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x35AB03C]
// PMFNDKKBEKN$$RandomizeObscuredVars @ RVA 0x35AB03C

void PMFNDKKBEKN__RandomizeObscuredVars(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  System_Action_AJNNHGGLGIF__o **ppSVar1;
  System_Action_PJKHAJKEHEL__o **ppSVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  System_Action_PJKHAJKEHEL__o *action;
  System_Action_AJNNHGGLGIF__o *action_00;
  
                    /* try { // try from 036ab040 to 037ab09b has its CatchHandler @ 036aaf98 */
  if ((DAT_04568e50 & 1) == 0) {
    FUN_01bab630(&System_Action<ModelParameters>_TypeInfo);
    FUN_01bab630(&System_Action<Rule>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_ForEach__);
    FUN_01bab630(&Method_PMFNDKKBEKN_<>c_KIECENPIMPB__);
                    /* try { // try from 036ab09c to 037ab0ab has its CatchHandler @ 036ab0b0 */
    FUN_01bab630(&Method_PMFNDKKBEKN_<>c_MBCOECLGJCG__);
                    /* try { // try from 036ab0ac to 037ab0b3 has its CatchHandler @ 036aaf98 */
                    /* catch() { ... } // from try @ 036ab028 with catch @ 036ab0b0
                       catch() { ... } // from try @ 036ab09c with catch @ 036ab0b0 */
    FUN_01bab630(&PMFNDKKBEKN_<>c_TypeInfo);
                    /* try { // try from 036ab0b4 to 037ab0b7 has its CatchHandler @ 036ab0c0 */
                    /* try { // try from 036ab0b8 to 037ab0c3 has its CatchHandler @ 036aaf98 */
    DAT_04568e50 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036ab0b4 with catch @ 036ab0c0
                        */
  OOMHDDBCBJP__RandomizeObscuredVars((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  __this_01 = (__this->fields).LJNCACBBIBD;
  if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_00 = PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_0;
  if (action_00 == (System_Action_AJNNHGGLGIF__o *)0x0) {
    if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = (System_Action_AJNNHGGLGIF__o *)
                thunk_FUN_01bda818(System_Action<Rule>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<Rule>_ForEach__);
    __this_00 = (__this->fields).PKBACCIJGGD;
    if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_1;
    if (action == (System_Action_PJKHAJKEHEL__o *)0x0) {
      if ((PMFNDKKBEKN_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_PJKHAJKEHEL__o *)
               thunk_FUN_01bda818(System_Action<ModelParameters>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9__27_1;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_00 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<ModelParameters>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override FightList FKALJBOIAHP()  [RVA 0x35AB208]
// PMFNDKKBEKN$$FKALJBOIAHP @ RVA 0x35AB208

FightList_o * PMFNDKKBEKN__FKALJBOIAHP(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  FightList_o *pAVar1;
  
  if ((__this->fields).super.KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
  pAVar1 = OOMHDDBCBJP__FKALJBOIAHP((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  return pAVar1;
}


// ===== private void HHFGOAJKCLG()  [RVA 0x35AAFE0]
// PMFNDKKBEKN$$HHFGOAJKCLG @ RVA 0x35AAFE0

void PMFNDKKBEKN__HHFGOAJKCLG(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (*(__this->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                    (__this,(__this->klass->vtable)._15_AAHLCCCONKI.method);
                    /* try { // try from 036aaffc to 037aafff has its CatchHandler @ 036ab00c */
  if (iVar1 == 1) {
                    /* try { // try from 036ab000 to 037ab003 has its CatchHandler @ 036ab004 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ab000 with catch @ 036ab004
                       try { // try from 036ab004 to 037ab027 has its CatchHandler @ 036aaf98 */
    if ((__this->fields).super.KANKFCNHDPA == false) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036aafa8 with catch @ 036ab008
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036aaffc with catch @ 036ab00c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036aafdc with catch @ 036ab010
                        */
      (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
                (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
    }
                    /* try { // try from 036ab028 to 037ab03f has its CatchHandler @ 036ab0b0 */
                    /* WARNING: Could not recover jumptable at 0x036ab030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._19_JDGBDDAIJNK.methodPtr)
              (__this,2,(__this->klass->vtable)._19_JDGBDDAIJNK.method);
    return;
  }
  return;
}


// ===== private void EBOMDHHOBDA()  [RVA 0x35AB238]
// PMFNDKKBEKN$$EBOMDHHOBDA @ RVA 0x35AB238

void PMFNDKKBEKN__EBOMDHHOBDA(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  uint32_t AMGKACBECJJ;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_04568e51 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04568e51 = 1;
    method = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  AMGKACBECJJ = LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
  PMFNDKKBEKN__PNANEMPIKKI(__this,AMGKACBECJJ,AMGKACBECJJ + 0x7b,in_x3);
  return;
}


// ===== public override FightList EPLGFIOJNDK(int DPJIDNBJIBG)  [RVA 0x35AB29C]
// PMFNDKKBEKN$$EPLGFIOJNDK @ RVA 0x35AB29C

FightList_o *
PMFNDKKBEKN__EPLGFIOJNDK(PMFNDKKBEKN_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568e52 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    DAT_04568e52 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  uVar1 = (__this->fields).super.KIHDFNGKPGN;
  do {
    if ((int)(uint)uVar1 <= DPJIDNBJIBG) {
      return (FightList_o *)0x0;
    }
    __this_00 = (__this->fields).super.HDDNEKLMLMF;
    if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__
                             ), pIVar2 = local_60.fields._current, bVar3) {
      if ((FightList_o *)local_60.fields._current == (FightList_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((FightList_Fields *)((long)local_60.fields._current + 0x10))->HLFBMBHOPMI ==
          DPJIDNBJIBG) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
        return (FightList_o *)pIVar2;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
    uVar1 = (__this->fields).super.KIHDFNGKPGN;
  } while( true );
}


// ===== private void IPAAGPCOKKK()  [RVA 0x35AB444]
// PMFNDKKBEKN$$IPAAGPCOKKK @ RVA 0x35AB444

void PMFNDKKBEKN__IPAAGPCOKKK(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int32_t length;
  bool_conflict bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *JMCEAKJCJLH;
  bool bVar4;
  uint32_t PKLFFPEBBDA;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar5;
  NLPJLHOEAOE_o *pNVar6;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  ModelParameters_o *item;
  MethodInfo *extraout_x1;
  OLKPEJMEBPJ_o *pOVar7;
  System_Collections_Generic_List_List_PJKHAJKEHEL___o *pSVar8;
  System_Collections_Generic_List_PJKHAJKEHEL__array *pSVar9;
  ModelParameters_array *pPVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568e53 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<ModelParameters>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<ModelParameters>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<ModelParameters>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e53 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pOVar7 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar7 == (OLKPEJMEBPJ_o *)0x0) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
    }
    PKLFFPEBBDA = LIIFLGALGNK__ACJKHFAFBCP(0,0xffffffff,(MethodInfo *)0x0);
  }
  else {
    PKLFFPEBBDA = (uint32_t)(pOVar7->fields).IKGEDJDFCBA;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).PLIMKHBGKED;
  if (pSVar8 != (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar5 = (__this->fields).PKBACCIJGGD;
    if (pSVar5 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__
                          );
        JMCEAKJCJLH = local_80.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
          return;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (pNVar6->fields).PJLHMJHKJOA;
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (pNVar6->fields).PJLHMJHKJOA = false;
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((ModelParameters_o *)JMCEAKJCJLH == (ModelParameters_o *)0x0) break;
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = NLPJLHOEAOE__GINBGECFLHA
                           (pNVar6,(ModelParameters_o *)JMCEAKJCJLH,
                            ((ModelParameters_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA *
                            (uint)(__this->fields).super.KIHDFNGKPGN,(MethodInfo *)0x0);
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar6 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (pNVar6->fields).PJLHMJHKJOA = bVar1;
        if ((__this->fields).super.KIHDFNGKPGN != 0) {
          iVar12 = 0;
          uVar11 = 0;
          do {
            __this_00 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
                        thunk_FUN_01bda818(System_Collections_Generic_List<ModelParameters>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<ModelParameters>__ctor__);
            lVar3 = Method_System_Collections_Generic_List<List<ModelParameters>>_Add__;
            pSVar8 = (__this->fields).PLIMKHBGKED;
            if (pSVar8 == (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pSVar9 == (System_Collections_Generic_List_PJKHAJKEHEL__array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar8->fields)._size;
            if (uVar2 < (uint)pSVar9->max_length) {
              (pSVar8->fields)._size = uVar2 + 1;
              pSVar9->m_Items[(int)uVar2] = __this_00;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar2,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (0 < ((ModelParameters_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA) {
              iVar13 = 0;
              do {
                if (pSVar5 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                item = (ModelParameters_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar5,
                                  iVar12 + iVar13,
                                  Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
                lVar3 = Method_System_Collections_Generic_List<ModelParameters>_Add__;
                if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pPVar10 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pPVar10 == (ModelParameters_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pPVar10->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pPVar10->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < ((ModelParameters_Fields *)((long)JMCEAKJCJLH + 0x10))->MGDHGEHGKBA);
              iVar12 = iVar12 + iVar13;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (__this->fields).super.KIHDFNGKPGN);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FICPLENMNCF(FightList MHOFCOHFCGL)  [RVA 0x35AB8C0]
// PMFNDKKBEKN$$FICPLENMNCF @ RVA 0x35AB8C0

void PMFNDKKBEKN__FICPLENMNCF(PMFNDKKBEKN_o *__this,FightList_o *MHOFCOHFCGL,MethodInfo *method)

{
  int32_t index;
  bool bVar1;
  System_Collections_Generic_List_List_PJKHAJKEHEL___o *__this_00;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Collections_Generic_List_List_AJNNHGGLGIF___o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568e54 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Rule>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<ModelParameters>>_get_Item__);
    DAT_04568e54 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  if (MHOFCOHFCGL != (FightList_o *)0x0) {
    FightList__FAHIIKLFAOG(MHOFCOHFCGL,(MethodInfo *)0x0);
    FightList__LMLGHFLCHGE(MHOFCOHFCGL,(MethodInfo *)0x0);
    __this_00 = (__this->fields).PLIMKHBGKED;
    if (__this_00 != (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)0x0) {
      index = (MHOFCOHFCGL->fields).HLFBMBHOPMI;
      pSVar2 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<List<ModelParameters>>_get_Item__);
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a0,pSVar2,
                   Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
        local_70.fields._index = local_a0.fields._index;
        local_70.fields._version = local_a0.fields._version;
        local_70.fields._list = local_a0.fields._list;
        local_70.fields._current = local_a0.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_70,
                                  Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__
                                 ), bVar1) {
          FightList__KIOMICIFKGC
                    (MHOFCOHFCGL,(ModelParameters_o *)local_70.fields._current,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
        __this_01 = (__this->fields).CIDEKAHPIGK;
        if ((__this_01 != (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)0x0) &&
           (pSVar2 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                Method_System_Collections_Generic_List<List<Rule>>_get_Item__
                               ), pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,pSVar2,
                     Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
          while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_88,
                                    Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                   ), bVar1) {
            FightList__AJECCFAENNF
                      (MHOFCOHFCGL,(Rule_o *)local_88.fields._current,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_88,
                     Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
          FightList__LFCMDLKDGHG(MHOFCOHFCGL,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int EBDBABMAIAM()  [RVA 0x35ABB94]
// PMFNDKKBEKN$$EBDBABMAIAM @ RVA 0x35ABB94

int32_t PMFNDKKBEKN__EBDBABMAIAM(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OLKPEJMEBPJ_o *__this_00;
  
  __this_00 = (__this->fields).super.LFJPDELEIHG;
  if (__this_00 != (OLKPEJMEBPJ_o *)0x0) {
    iVar1 = OLKPEJMEBPJ__LIIDJOLDBBF(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


// ===== public override void GOLLEBBHEHE(FightList FBFPLEFCDOK, int DPJIDNBJIBG)  [RVA 0x35ABBA8]
// PMFNDKKBEKN$$GOLLEBBHEHE @ RVA 0x35ABBA8

void PMFNDKKBEKN__GOLLEBBHEHE
               (PMFNDKKBEKN_o *__this,FightList_o *FBFPLEFCDOK,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  OOMHDDBCBJP__GOLLEBBHEHE((OOMHDDBCBJP_o *)__this,FBFPLEFCDOK,DPJIDNBJIBG,(MethodInfo *)0x0);
  if ((__this->fields).HPJIEODKHEH != false) {
    PMFNDKKBEKN__FICPLENMNCF(__this,FBFPLEFCDOK,method_00);
    return;
  }
  return;
}


// ===== public void CMLIMFKNANP()  [RVA 0x35ABBE8]
// PMFNDKKBEKN$$CMLIMFKNANP @ RVA 0x35ABBE8

void PMFNDKKBEKN__CMLIMFKNANP(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OLKPEJMEBPJ_o *pOVar2;
  
  if ((DAT_04568e55 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e55 = 1;
  }
  pOVar2 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar2 == (OLKPEJMEBPJ_o *)0x0) {
    return;
  }
  iVar1 = OLKPEJMEBPJ__LIIDJOLDBBF(pOVar2,(MethodInfo *)0x0);
  OLKPEJMEBPJ__MJDAFBEALIP(pOVar2,iVar1 + 1,(MethodInfo *)0x0);
  pOVar2 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar2 != (OLKPEJMEBPJ_o *)0x0) {
    if ((pOVar2->fields).IAMLNMJMPIJ != false) {
      PMFNDKKBEKN__EBOMDHHOBDA(__this,method_00);
      PMFNDKKBEKN__HIGLGIECEJA(__this,method_01);
    }
    if ((__this->fields).super.KANKFCNHDPA == false) {
      (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
                (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
    }
    (*(__this->klass->vtable)._19_JDGBDDAIJNK.methodPtr)
              (__this,2,(__this->klass->vtable)._19_JDGBDDAIJNK.method);
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
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HIGLGIECEJA()  [RVA 0x35ABD04]
// PMFNDKKBEKN$$HIGLGIECEJA @ RVA 0x35ABD04

void PMFNDKKBEKN__HIGLGIECEJA(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  OLKPEJMEBPJ_o *pOVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568e56 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FightList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    DAT_04568e56 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pOVar2 = (__this->fields).super.LFJPDELEIHG;
  if ((pOVar2 != (OLKPEJMEBPJ_o *)0x0) &&
     (((pOVar2->fields).LJNPEJNOIPB == false || ((pOVar2->fields).CHMOBJPGDBN == false)))) {
    PMFNDKKBEKN__EBOMDHHOBDA(__this,method);
    method = extraout_x1_00;
  }
  PMFNDKKBEKN__CHAOFEIDGIE(__this,method);
  PMFNDKKBEKN__IPAAGPCOKKK(__this,method_00);
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  (__this->fields).HPJIEODKHEH = true;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FightList>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<FightList>_MoveNext__
                             ), bVar1) {
      PMFNDKKBEKN__FICPLENMNCF(__this,(FightList_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<FightList>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string ACCIHBHMFPN, Vector2 BLEOKMIDGIK, string KGLJICLJHEL, string NEJHIEOHMCF, string FNLBOLFNLPP, string ONLOEDAIEOJ, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO, string JCLPIKHEKBB, string JEHFOBHMGJM, string LBKOHHHPNIP, string FNLFDPAJACB, string OAJJFDIDFKC, string JOPFAAGCIOI, bool MENLMNJNMMO)  [RVA 0x35AC3D8]
// PMFNDKKBEKN$$.ctor @ RVA 0x35AC3D8

void PMFNDKKBEKN___ctor(PMFNDKKBEKN_o *__this,System_String_o *ACCIHBHMFPN,
                       UnityEngine_Vector2_o BLEOKMIDGIK,System_String_o *KGLJICLJHEL,
                       System_String_o *NEJHIEOHMCF,System_String_o *FNLBOLFNLPP,
                       System_String_o *ONLOEDAIEOJ,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       System_String_o *JCLPIKHEKBB,System_String_o *JEHFOBHMGJM,
                       System_String_o *LBKOHHHPNIP,System_String_o *FNLFDPAJACB,
                       System_String_o *OAJJFDIDFKC,System_String_o *JOPFAAGCIOI,bool MENLMNJNMMO,
                       MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_List_AJNNHGGLGIF___o *__this_01;
  System_Collections_Generic_List_List_AJNNHGGLGIF___o **ppSVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_02;
  System_Collections_Generic_List_PJKHAJKEHEL__o **ppSVar3;
  System_Collections_Generic_List_List_PJKHAJKEHEL___o *__this_03;
  System_Collections_Generic_List_List_PJKHAJKEHEL___o **ppSVar4;
  
  if ((DAT_04568e57 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<ModelParameters>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Rule>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ModelParameters>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Rule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<List<Rule>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<List<ModelParameters>>_TypeInfo);
    DAT_04568e57 = 1;
  }
  __this_00 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Rule>__ctor__);
  ppSVar1 = &(__this->fields).LJNCACBBIBD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<List<Rule>>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<List<Rule>>__ctor__);
  ppSVar2 = &(__this->fields).CIDEKAHPIGK;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ModelParameters>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<ModelParameters>__ctor__);
  ppSVar3 = &(__this->fields).PKBACCIJGGD;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  __this_03 = (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<List<ModelParameters>>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<List<ModelParameters>>__ctor__);
  ppSVar4 = &(__this->fields).PLIMKHBGKED;
  *ppSVar4 = __this_03;
  thunk_FUN_01c20e04(ppSVar4,__this_03);
  OOMHDDBCBJP___ctor((OOMHDDBCBJP_o *)__this,ACCIHBHMFPN,BLEOKMIDGIK,KGLJICLJHEL,NEJHIEOHMCF,
                     FNLBOLFNLPP,ONLOEDAIEOJ,JDIHKNKFJMK,EHEFEIEKHJO,JCLPIKHEKBB,JEHFOBHMGJM,
                     LBKOHHHPNIP,FNLFDPAJACB,OAJJFDIDFKC,JOPFAAGCIOI,MENLMNJNMMO,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).HPJIEODKHEH = false;
  return;
}


// ===== public override void GDOLJLANOKC()  [RVA 0x35AC5C8]
// PMFNDKKBEKN$$GDOLJLANOKC @ RVA 0x35AC5C8

void PMFNDKKBEKN__GDOLJLANOKC(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  OLKPEJMEBPJ_o *pOVar2;
  
  iVar1 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
  if (((iVar1 == 9) ||
      (iVar1 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0), iVar1 == 10)) ||
     (iVar1 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0), iVar1 == 0x13)) {
    pOVar2 = (__this->fields).super.LFJPDELEIHG;
    if (pOVar2 != (OLKPEJMEBPJ_o *)0x0) {
      (pOVar2->fields).MEMNIKBPEJL = true;
    }
    iVar1 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
    if (iVar1 == 9) {
      PMFNDKKBEKN__HIGLGIECEJA(__this,method_00);
      pOVar2 = (__this->fields).super.LFJPDELEIHG;
      if (pOVar2 != (OLKPEJMEBPJ_o *)0x0) {
        (pOVar2->fields).IAMLNMJMPIJ = true;
      }
    }
  }
  return;
}


// ===== public override List<FightList> DHBIECBOKMB()  [RVA 0x35AC64C]
// PMFNDKKBEKN$$DHBIECBOKMB @ RVA 0x35AC64C

System_Collections_Generic_List_AFFHKININGD__o *
PMFNDKKBEKN__DHBIECBOKMB(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
            (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  return (__this->fields).super.HDDNEKLMLMF;
}


// ===== private void CHAOFEIDGIE()  [RVA 0x35ABE6C]
// PMFNDKKBEKN$$CHAOFEIDGIE @ RVA 0x35ABE6C

void PMFNDKKBEKN__CHAOFEIDGIE(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  uint32_t PKLFFPEBBDA;
  int32_t iVar6;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar7;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *extraout_x1;
  Rule_o *item;
  OLKPEJMEBPJ_o *pOVar8;
  System_Collections_Generic_List_List_AJNNHGGLGIF___o *pSVar9;
  System_Collections_Generic_List_AJNNHGGLGIF__array *pSVar10;
  Rule_array *pAVar11;
  uint uVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568e58 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Rule>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<Rule>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Rule>_TypeInfo);
    DAT_04568e58 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pOVar8 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar8 == (OLKPEJMEBPJ_o *)0x0) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
    }
    PKLFFPEBBDA = LIIFLGALGNK__ACJKHFAFBCP(0,0xffffffff,(MethodInfo *)0x0);
  }
  else {
    PKLFFPEBBDA = (uint32_t)(pOVar8->fields).KOANEAEMOOP;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
  pSVar7 = (__this->fields).LJNCACBBIBD;
  if (pSVar7 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar7,
               Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                             ), pIVar4 = local_80.fields._current, bVar5) {
      if ((RandomRule_o *)local_80.fields._current == (RandomRule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (((RandomRule_Fields *)((long)local_80.fields._current + 0x10))->super).
                         JDNKKGPNHPB.fields,(MethodInfo *)0x0);
      if (iVar6 == 0x15) {
        bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
        if (((((RandomRule_c *)pIVar4->klass)->_2).naturalAligment < bVar1) ||
           ((((RandomRule_c *)pIVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)RandomRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pIVar4);
        }
        RandomRule__EKFNBHMNHFA((RandomRule_o *)pIVar4,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    pSVar9 = (__this->fields).CIDEKAHPIGK;
    if (pSVar9 != (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)0x0) {
      iVar6 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (0 < iVar6) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar6,(MethodInfo *)0x0);
      }
      if ((__this->fields).super.KIHDFNGKPGN != 0) {
        uVar12 = 0;
        do {
          pSVar7 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar7,
                     Method_System_Collections_Generic_List<Rule>__ctor__);
          lVar3 = Method_System_Collections_Generic_List<List<Rule>>_Add__;
          pSVar9 = (__this->fields).CIDEKAHPIGK;
          if (pSVar9 == (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)0x0)
          goto LAB_036ac334;
          pSVar10 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pSVar10 == (System_Collections_Generic_List_AJNNHGGLGIF__array *)0x0)
          goto LAB_036ac334;
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pSVar10->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pSVar10->m_Items[(int)uVar2] = pSVar7;
            thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2,pSVar7);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar7,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          __this_00 = (__this->fields).LJNCACBBIBD;
          if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_036ac334;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                                   ), pIVar4 = local_80.fields._current, bVar5) {
            if ((RandomRule_o *)local_80.fields._current == (RandomRule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (((RandomRule_Fields *)((long)local_80.fields._current + 0x10))->
                               super).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<Rule>_Add__;
            if (iVar6 == 0x15) {
              bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
              if (((((RandomRule_c *)pIVar4->klass)->_2).naturalAligment < bVar1) ||
                 ((((RandomRule_c *)pIVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)RandomRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pIVar4);
              }
              RandomRule__KACMDIEPEMF((RandomRule_o *)pIVar4,(MethodInfo *)0x0);
              item = ((RandomRule_Fields *)((long)pIVar4 + 0x10))->EOKBEEIMNAF;
              if (item == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (item->fields).KHKEGAKGNCN = false;
              lVar3 = Method_System_Collections_Generic_List<Rule>_Add__;
              if (pSVar7 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pAVar11 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pAVar11 == (Rule_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pAVar11->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pAVar11->m_Items[(int)uVar2] = item;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (pSVar7 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pAVar11 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pAVar11 == (Rule_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pAVar11->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pAVar11->m_Items[(int)uVar2] = (Rule_o *)pIVar4;
                thunk_FUN_01c20e04(pAVar11->m_Items + (int)uVar2,pIVar4);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,pIVar4,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (__this->fields).super.KIHDFNGKPGN);
      }
      return;
    }
  }
LAB_036ac334:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void NMAPGPBDPAN(FightList FBFPLEFCDOK)  [RVA 0x35AC67C]
// PMFNDKKBEKN$$NMAPGPBDPAN @ RVA 0x35AC67C

void PMFNDKKBEKN__NMAPGPBDPAN(PMFNDKKBEKN_o *__this,FightList_o *FBFPLEFCDOK,MethodInfo *method)

{
  int32_t iVar1;
  OLKPEJMEBPJ_o *__this_00;
  int iVar2;
  PAMEPBLOLPB_o *pPVar3;
  
  __this_00 = (__this->fields).super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar1 = OLKPEJMEBPJ__LIIDJOLDBBF(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  if (FBFPLEFCDOK != (FightList_o *)0x0) {
    pPVar3 = (FBFPLEFCDOK->fields).JPBIBBBMCCD;
    if (pPVar3 != (PAMEPBLOLPB_o *)0x0) {
      iVar1 = 1;
      if ((pPVar3->fields).AAECGBAMDEL < (FBFPLEFCDOK->fields).MKMGFKDKKBG * iVar2) {
        iVar1 = 2;
      }
      (FBFPLEFCDOK->fields).HHJIJKJCEOF = iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

