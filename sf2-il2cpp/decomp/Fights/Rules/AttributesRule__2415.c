// Original name: Nekki.SF2.Core.Fights.Rules.AttributesRule  (obfuscated JFDPMLLJKFH)
// TypeDefIndex 2415
// Namespace: 
// public class AttributesRule : InFightRule
// Fields:
//   private Dictionary<string, ObscuredFloat> CMHJMGKMCCI; // 0x70

// ===== public Dictionary<string, ObscuredFloat> MDEGPFNJBEM()  [RVA 0x3339060]
// AttributesRule$$MDEGPFNJBEM @ RVA 0x3339060

System_Collections_Generic_Dictionary_string__ObscuredFloat__o *
AttributesRule__MDEGPFNJBEM(AttributesRule_o *__this,MethodInfo *method)

{
  return (__this->fields).CMHJMGKMCCI;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x3339068]
// AttributesRule$$.ctor @ RVA 0x3339068

void AttributesRule___ctor(AttributesRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *pSVar2;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this_00;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o **ppSVar3;
  Il2CppClass *key;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o local_70;
  
  if ((DAT_04567960 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredFloat>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04567960 = 1;
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ObscuredFloat>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<object,_ObscuredFloat>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>__ctor__);
  ppSVar3 = &(__this->fields).CMHJMGKMCCI;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  InFightRule___ctor((InFightRule_o *)__this,10,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_TypeInfo->static_fields->HNPCJGMHLCM;
  if (__this_00 != (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_88,
                         Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_88,
                   Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
        (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
                  (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
        return;
      }
      if (local_88.fields._current == (Il2CppObject *)0x0) break;
      pSVar2 = *ppSVar3;
      key = local_88.fields._current[1].klass;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO(&local_70,0.0,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_ObscuredFloat>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)key
                 ,&local_70,
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x33392D8]
// AttributesRule$$DIGLGKAPOAB @ RVA 0x33392D8

void AttributesRule__DIGLGKAPOAB(AttributesRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *__this_00;
  FPLCEOJCPOD_o *pFVar4;
  MethodInfo *pMVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  Il2CppObject *local_100 [3];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_e8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  
  if ((DAT_04567961 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_get_Current__
                );
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Value__)
    ;
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_3217/*"AttributesRule::initRule - wrong appliance - {0}"*/);
    DAT_04567961 = 1;
  }
  local_80 = 0;
  local_68 = 0;
  local_b0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_88 = 0;
  local_b0.fields._getEnumeratorRetType = 0;
  local_b0.fields._36_4_ = 0;
  local_b0.fields._version = 0;
  local_b0.fields._index = 0;
  local_b0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_ObscuredFloat>__GetEnumerator
            (&local_e8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__);
  local_b0.fields._version = local_e8.fields._version;
  local_b0.fields._index = local_e8.fields._index;
  local_b0.fields._current.fields.value = local_e8.fields._current.fields.value;
  local_b0.fields._current.fields.key = local_e8.fields._current.fields.key;
  uStack_88 = uStack_c0;
  local_b0.fields._getEnumeratorRetType = local_e8.fields._getEnumeratorRetType;
  local_b0.fields._36_4_ = local_e8.fields._36_4_;
  local_80 = local_b8;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__MoveNext
                          (&local_b0,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                          );
        uVar8 = uStack_88;
        pIVar6 = local_b0.fields._current.fields.key;
        if (!bVar3) {
          System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
                    );
          return;
        }
        local_100[1] = (Il2CppObject *)local_b0.fields._32_8_;
        local_100[0] = local_b0.fields._current.fields.value;
        local_100[2]._0_1_ = uStack_88._0_1_;
        local_100[2]._1_1_ = uStack_88._1_1_;
        local_100[2]._2_2_ = uStack_88._2_2_;
        uStack_88 = uVar8;
        fVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_100,
                           (MethodInfo *)0x0);
        iVar1 = (__this->fields).super.JGJNBILDCHK;
        if (iVar1 != 1) break;
        local_68 = local_68 & 0xffffffff;
        if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (IMMNELPBGIF[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar5 = (IMMNELPBGIF[2].klass)->vtable[9].method;
        if (pMVar5 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                          ((FPLCEOJCPOD_o *)pMVar5,(System_String_o *)pIVar6,
                           (int32_t *)((long)&local_68 + 4),true,false,(MethodInfo *)0x0);
        if (IMMNELPBGIF[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar3);
        }
        pMVar5 = (IMMNELPBGIF[2].klass)->vtable[9].method;
        if (pMVar5 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar1 = -0x80000000;
        if (fVar9 != INFINITY) {
          iVar1 = (int)fVar9;
        }
        FPLCEOJCPOD__FOOHBJNHOKK
                  ((FPLCEOJCPOD_o *)pMVar5,(System_String_o *)pIVar6,local_68._4_4_ + iVar1,false,
                   (MethodInfo *)0x0);
      }
      if (iVar1 == 2) break;
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_e8.fields._dictionary._0_4_ = (__this->fields).super.JGJNBILDCHK;
      pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_e8);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (lVar7 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar7 == 0)) {
        uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar8,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar6;
      thunk_FUN_01c20e04(args->m_Items,pIVar6);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_3217/*"AttributesRule::initRule - wrong appliance - {0}"*/,args,(MethodInfo *)0x0);
    }
    local_68 = local_68 & 0xffffffff00000000;
    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (IMMNELPBGIF[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar4 = *(FPLCEOJCPOD_o **)((long)IMMNELPBGIF[2].monitor + 0x1d0);
    if (pFVar4 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                      (pFVar4,(System_String_o *)pIVar6,(int32_t *)&local_68,true,false,
                       (MethodInfo *)0x0);
    if (IMMNELPBGIF[2].monitor == (void *)0x0) break;
    pFVar4 = *(FPLCEOJCPOD_o **)((long)IMMNELPBGIF[2].monitor + 0x1d0);
    if (pFVar4 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = -0x80000000;
    if (fVar9 != INFINITY) {
      iVar1 = (int)fVar9;
    }
    FPLCEOJCPOD__FOOHBJNHOKK
              (pFVar4,(System_String_o *)pIVar6,(int)local_68 + iVar1,false,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar3);
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x3339730]
// AttributesRule$$GOGPCNMIJOB @ RVA 0x3339730

InFightRule_o * AttributesRule__GOGPCNMIJOB(AttributesRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  AttributesRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04567962 & 1) == 0) {
    FUN_01bab630(&AttributesRule_TypeInfo);
    DAT_04567962 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (AttributesRule_o *)thunk_FUN_01bda818(AttributesRule_TypeInfo,method);
    AttributesRule___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (AttributesRule_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33397B4]
// AttributesRule$$HNIHOIAMDPC @ RVA 0x33397B4

/* WARNING: Removing unreachable block (ram,0x03439d20) */
/* WARNING: Removing unreachable block (ram,0x03439e68) */

void AttributesRule__HNIHOIAMDPC
               (AttributesRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this_00;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *pSVar11;
  Il2CppClass *key;
  float fVar12;
  float fVar13;
  System_Collections_Generic_List_T__o *local_150 [4];
  System_Collections_Generic_List_Enumerator_T__o local_130;
  System_Collections_Generic_List_T__o *local_110;
  int32_t iStack_108;
  int32_t iStack_104;
  bool_conflict local_100;
  bool_conflict bStack_ff;
  undefined2 uStack_fe;
  System_Collections_Generic_List_T__o *local_f0 [4];
  System_Collections_Generic_List_T__o *local_d0;
  int32_t iStack_c8;
  int32_t iStack_c4;
  bool_conflict local_c0;
  bool_conflict bStack_bf;
  undefined2 uStack_be;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_T__o *local_90 [4];
  
  if ((DAT_04567963 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_ContainsKey__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_11431/*"Round"*/);
    FUN_01bab630(&StringLiteral_3023/*"ApplyTo"*/);
    FUN_01bab630(&StringLiteral_5618/*"Eclipse"*/);
    FUN_01bab630(&StringLiteral_14861/*"WarriorPower"*/);
    DAT_04567963 = 1;
  }
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  Rule__HNIHOIAMDPC((Rule_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03439974;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 03439954 to 03539a03 has its CatchHandler @ 03439954
                       catch() { ... } // from try @ 03439954 with catch @ 03439954
                       catch() { ... } // from try @ 03439a30 with catch @ 03439954
                       catch() { ... } // from try @ 03439a5c with catch @ 03439954
                       catch() { ... } // from try @ 03439a84 with catch @ 03439954
                       catch() { ... } // from try @ 03439ac4 with catch @ 03439954 */
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03439974:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03439dc0;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_034399d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034399d4:
    LBJNDMNEJJB = (System_Xml_XmlAttribute_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03439a04 to 03539a0b has its CatchHandler @ 03439a68 */
                    /* try { // try from 03439a18 to 03539a2f has its CatchHandler @ 03439a64 */
    if (((LBJNDMNEJJB->klass->_2).naturalAligment < bVar2) ||
       ((LBJNDMNEJJB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(LBJNDMNEJJB);
    }
    pSVar6 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439a30 to 03539a57 has its CatchHandler @ 03439954 */
    bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_11431/*"Round"*/,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar6 = (System_String_o *)
               (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                         (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439a58 to 03539a5b has its CatchHandler @ 03439a60 */
                    /* try { // try from 03439a5c to 03539a7f has its CatchHandler @ 03439954 */
      bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_3023/*"ApplyTo"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03439a58 with catch @ 03439a60
                        */
      if (bVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03439a18 with catch @ 03439a64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03439a04 with catch @ 03439a68
                        */
        pSVar6 = (System_String_o *)
                 (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                           (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439a80 to 03539a83 has its CatchHandler @ 03439aac */
                    /* try { // try from 03439a84 to 03539abb has its CatchHandler @ 03439954 */
        bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_5618/*"Eclipse"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar6 = (System_String_o *)
                   (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                             (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
          bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_14861/*"WarriorPower"*/,(MethodInfo *)0x0);
          if (bVar3) {
                    /* catch() { ... } // from try @ 03439a80 with catch @ 03439aac */
            pSVar11 = (__this->fields).CMHJMGKMCCI;
                    /* try { // try from 03439abc to 03539ac3 has its CatchHandler @ 03439ad8 */
            pIVar7 = (Il2CppObject *)
                     (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                               (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439ac4 to 03539acf has its CatchHandler @ 03439954 */
            if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 03439ad0 to 03539ad7 has its CatchHandler @ 03439ad8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03439abc with catch @ 03439ad8
                       catch(type#2 @ 00000000) { ... } // from try @ 03439ad0 with catch @ 03439ad8
                        */
            bVar3 = System_Collections_Generic_Dictionary<object,_ObscuredFloat>__ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                               pIVar7,
                               Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_ContainsKey__
                              );
            pSVar11 = (__this->fields).CMHJMGKMCCI;
            pIVar1 = (LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr;
            if (bVar3) {
              pIVar7 = (Il2CppObject *)(*pIVar1)(LBJNDMNEJJB);
              if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0)
              {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_ObscuredFloat>__get_Item
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,pIVar7,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_get_Item__
                        );
              local_f0[1] = (System_Collections_Generic_List_T__o *)local_130.fields._8_8_;
              local_f0[0] = local_130.fields._list;
              local_f0[2]._0_1_ = local_130.fields._current._0_1_;
              local_f0[2]._1_1_ = local_130.fields._current._1_1_;
              local_f0[2]._2_2_ = local_130.fields._current._2_2_;
              fVar12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                 ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_f0,
                                  (MethodInfo *)0x0);
              fVar13 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         fVar12 + fVar13,(MethodInfo *)0x0);
              iStack_108 = local_130.fields._index;
              iStack_104 = local_130.fields._version;
              local_110 = local_130.fields._list;
              local_100 = local_130.fields._current._0_1_;
              bStack_ff = local_130.fields._current._1_1_;
              uStack_fe = local_130.fields._current._2_2_;
              System_Collections_Generic_Dictionary<object,_ObscuredFloat>__set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,pIVar7,
                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__
                        );
            }
            else {
              pIVar7 = (Il2CppObject *)
                       (*pIVar1)(LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
              fVar12 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,fVar12,
                         (MethodInfo *)0x0);
              iStack_c8 = local_130.fields._index;
              iStack_c4 = local_130.fields._version;
              local_d0 = local_130.fields._list;
              local_c0 = local_130.fields._current._0_1_;
              bStack_bf = local_130.fields._current._1_1_;
              uStack_be = local_130.fields._current._2_2_;
              if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0)
              {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_ObscuredFloat>__Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,pIVar7,
                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_Add__);
            }
          }
        }
      }
    }
    pSVar6 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
    bVar3 = System_String__op_Equality(pSVar6,StringLiteral_14861/*"WarriorPower"*/,(MethodInfo *)0x0);
    if (bVar3) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = GameUtils_TypeInfo->static_fields->HNPCJGMHLCM;
      if (__this_00 == (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_130,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
      local_b0.fields._current =
           (Il2CppObject *)CONCAT44(local_130.fields._current._4_4_,local_130.fields._current._0_4_)
      ;
      local_b0.fields._index = local_130.fields._index;
      local_b0.fields._version = local_130.fields._version;
      local_b0.fields._list = local_130.fields._list;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_b0,
                                Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__
                               ), bVar3) {
        if (local_b0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (__this->fields).CMHJMGKMCCI;
        if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        key = local_b0.fields._current[1].klass;
        System_Collections_Generic_Dictionary<object,_ObscuredFloat>__get_Item
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                   (Il2CppObject *)key,
                   Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_get_Item__);
        local_150[1] = (System_Collections_Generic_List_T__o *)local_130.fields._8_8_;
        local_150[0] = local_130.fields._list;
        local_150[2]._0_1_ = local_130.fields._current._0_1_;
        local_150[2]._1_1_ = local_130.fields._current._1_1_;
        local_150[2]._2_2_ = local_130.fields._current._2_2_;
        fVar12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_150,
                            (MethodInfo *)0x0);
        fVar13 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,fVar12 + fVar13,
                   (MethodInfo *)0x0);
        local_90[1] = (System_Collections_Generic_List_T__o *)local_130.fields._8_8_;
        local_90[0] = local_130.fields._list;
        local_90[2]._0_1_ = local_130.fields._current._0_1_;
        local_90[2]._1_1_ = local_130.fields._current._1_1_;
        local_90[2]._2_2_ = local_130.fields._current._2_2_;
        System_Collections_Generic_Dictionary<object,_ObscuredFloat>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                   (Il2CppObject *)key,(CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_90
                   ,Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_b0,Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__)
      ;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03439ddc;
    }
  }
LAB_03439dc0:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03439ddc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x3339FD4]
// AttributesRule$$RandomizeObscuredVars @ RVA 0x3339FD4

void AttributesRule__RandomizeObscuredVars(AttributesRule_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *__this_00;
  Il2CppObject *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  Il2CppObject *local_90;
  Il2CppObject *pIStack_88;
  uint8_t uStack_80;
  uint8_t uStack_7f;
  uint8_t uStack_7e;
  uint8_t uStack_7d;
  float fStack_7c;
  undefined8 local_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_04567964 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Value__)
    ;
    DAT_04567964 = 1;
  }
  local_40 = 0;
  local_b0 = (Il2CppObject *)0x0;
  uStack_a8._0_1_ = 0;
  uStack_a8._1_1_ = 0;
  uStack_a8._2_1_ = 0;
  uStack_a8._3_1_ = 0;
  uStack_a8._4_4_ = 0.0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_48 = 0;
  local_70.fields._getEnumeratorRetType._0_1_ = 0;
  local_70.fields._getEnumeratorRetType._1_1_ = 0;
  local_70.fields._getEnumeratorRetType._2_1_ = 0;
  local_70.fields._getEnumeratorRetType._3_1_ = 0;
  local_70.fields._36_4_ = 0.0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0._0_1_ = false;
  local_a0._1_1_ = false;
  local_a0._2_2_ = 0;
  Rule__RandomizeObscuredVars((Rule_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_ObscuredFloat>__GetEnumerator
              (&local_70,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__);
    while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                             ), uVar2 = local_70.fields._32_8_, bVar3) {
      pIStack_88 = local_70.fields._current.fields.value;
      local_90 = local_70.fields._current.fields.key;
      local_78 = uStack_48;
      uVar1 = local_78;
      uStack_80 = (undefined1)local_70.fields._getEnumeratorRetType;
      uStack_7f = local_70.fields._getEnumeratorRetType._1_1_;
      uStack_7e = local_70.fields._getEnumeratorRetType._2_1_;
      uStack_7d = local_70.fields._getEnumeratorRetType._3_1_;
      fStack_7c = (float)local_70.fields._36_4_;
      local_78._0_4_ = (undefined4)uStack_48;
      local_a0._0_1_ = local_78._0_1_;
      local_a0._1_1_ = local_78._1_1_;
      local_a0._2_2_ = local_78._2_2_;
      local_70.fields._getEnumeratorRetType = (int32_t)uVar2;
      local_70.fields._36_4_ = SUB84(uVar2,4);
      uStack_a8._0_1_ = (undefined1)local_70.fields._getEnumeratorRetType;
      uStack_a8._1_1_ = local_70.fields._getEnumeratorRetType._1_1_;
      uStack_a8._2_1_ = local_70.fields._getEnumeratorRetType._2_1_;
      uStack_a8._3_1_ = local_70.fields._getEnumeratorRetType._3_1_;
      uStack_a8._4_4_ = (float)local_70.fields._36_4_;
      local_b0 = local_70.fields._current.fields.value;
      local_78 = uVar1;
      local_70.fields._32_8_ = uVar2;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

