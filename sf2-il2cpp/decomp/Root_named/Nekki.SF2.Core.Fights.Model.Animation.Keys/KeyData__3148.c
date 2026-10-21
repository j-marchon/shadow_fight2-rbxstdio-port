// Original name: Nekki.SF2.Core.Fights.Model.Animation.Keys.KeyData  (obfuscated NKOIBKNPICN)
// TypeDefIndex 3148
// Namespace: 
// public class KeyData
// Fields:
//   public List<int> OOIGOEAHPMA; // 0x10
//   public List<int> KJNPENJKBKD; // 0x18
//   public List<int> JCJPICMGIHE; // 0x20
//   public KeyData.AAHBFHOIPGB BHJAGFIAEAA; // 0x28
//   public bool PBPNNKNICEE; // 0x2C

// ===== public string OLKAFFDIJLH()  [RVA 0x34D7474]
// KeyData$$OLKAFFDIJLH @ RVA 0x34D7474

System_String_o * KeyData__OLKAFFDIJLH(KeyData_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar6;
  int iVar7;
  
  if ((DAT_045686e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    FUN_01bab630(&StringLiteral_230/*" + "*/);
    FUN_01bab630(&StringLiteral_273/*" ADD: "*/);
    FUN_01bab630(&StringLiteral_3552/*"Both"*/);
    FUN_01bab630(&StringLiteral_11820/*"Sequence"*/);
    FUN_01bab630(&StringLiteral_305/*" PressType: "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045686e3 = 1;
  }
  pSVar3 = (__this->fields).OOIGOEAHPMA;
  if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    pSVar5 = StringLiteral_1/*""*/;
    if (iVar1 < 1) {
LAB_035d7588:
      pSVar5 = System_String__Concat(pSVar5,StringLiteral_273/*" ADD: "*/,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).KJNPENJKBKD;
      if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar1 = (pSVar3->fields)._size;
        if (iVar1 < 1) {
LAB_035d7618:
          pSVar5 = System_String__Concat(pSVar5,StringLiteral_305/*" PressType: "*/,(MethodInfo *)0x0);
          iVar1 = (__this->fields).BHJAGFIAEAA;
          if (iVar1 == 0) {
            puVar6 = &StringLiteral_3552/*"Both"*/;
          }
          else {
            if (iVar1 != 1) {
              return pSVar5;
            }
            puVar6 = &StringLiteral_11820/*"Sequence"*/;
          }
          pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar6,(MethodInfo *)0x0);
          return pSVar5;
        }
        iVar7 = 0;
        do {
          iVar2 = System_Collections_Generic_List<int>__get_Item
                            (pSVar3,iVar7,Method_System_Collections_Generic_List<int>_get_Item__);
          pSVar4 = KeyData__JKNFAAKALMN(iVar2,method_01);
          pSVar5 = System_String__Concat(pSVar5,pSVar4,(MethodInfo *)0x0);
          if (iVar7 < iVar1 + -1) {
            pSVar5 = System_String__Concat(pSVar5,StringLiteral_230/*" + "*/,(MethodInfo *)0x0);
          }
          iVar7 = iVar7 + 1;
          if (iVar1 == iVar7) goto LAB_035d7618;
          pSVar3 = (__this->fields).KJNPENJKBKD;
        } while (pSVar3 != (System_Collections_Generic_List_int__o *)0x0);
      }
    }
    else {
      iVar7 = 0;
      do {
        iVar2 = System_Collections_Generic_List<int>__get_Item
                          (pSVar3,iVar7,Method_System_Collections_Generic_List<int>_get_Item__);
        pSVar4 = KeyData__JKNFAAKALMN(iVar2,method_00);
        pSVar5 = System_String__Concat(pSVar5,pSVar4,(MethodInfo *)0x0);
        if (iVar7 < iVar1 + -1) {
          pSVar5 = System_String__Concat(pSVar5,StringLiteral_230/*" + "*/,(MethodInfo *)0x0);
        }
        iVar7 = iVar7 + 1;
        if (iVar1 == iVar7) goto LAB_035d7588;
        pSVar3 = (__this->fields).OOIGOEAHPMA;
      } while (pSVar3 != (System_Collections_Generic_List_int__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JGMKBFKGGIL()  [RVA 0x34D778C]
// KeyData$$JGMKBFKGGIL @ RVA 0x34D778C

/* WARNING: Removing unreachable block (ram,0x035d793c) */

void KeyData__JGMKBFKGGIL(KeyData_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  MethodInfo *extraout_x1;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_60 [16];
  undefined8 local_50;
  
  if ((DAT_045686e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_045686e4 = 1;
    method = extraout_x1;
  }
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).OOIGOEAHPMA;
  if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((pSVar2->fields)._size == 1) {
    (__this->fields).BHJAGFIAEAA = 0;
  }
  else {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,pSVar2,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_60._8_4_ = local_98.fields._index;
    local_60._12_4_ = local_98.fields._version;
    local_60._0_8_ = local_98.fields._list;
    local_50 = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<int>__Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                   Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
        (__this->fields).BHJAGFIAEAA = 1;
        return;
      }
      pSVar2 = (__this->fields).KJNPENJKBKD;
      if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_50;
      System_Collections_Generic_List<int>__GetEnumerator
                (&local_98,pSVar2,Method_System_Collections_Generic_List<int>_GetEnumerator__);
      local_80._8_4_ = local_98.fields._index;
      local_80._12_4_ = local_98.fields._version;
      local_80._0_8_ = local_98.fields._list;
      local_70 = local_98.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                           Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
        if (!bVar1) {
          iVar3 = 3;
          goto LAB_035d78c0;
        }
      } while (iVar3 != (int)local_70);
      (__this->fields).BHJAGFIAEAA = 0;
      iVar3 = 7;
LAB_035d78c0:
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    } while ((iVar3 == 3) || (iVar3 == 0));
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
  }
  return;
}


// ===== public static bool LJOKBIDEOMJ(KeyData FMPJLBLNHMC, KeyData IHEPHBIPLPM)  [RVA 0x34D79F4]
// KeyData$$LJOKBIDEOMJ @ RVA 0x34D79F4

bool KeyData__LJOKBIDEOMJ
               (KeyData_o *FMPJLBLNHMC,KeyData_o *IHEPHBIPLPM,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = KeyData__LCAEEPKOHMN(FMPJLBLNHMC,IHEPHBIPLPM,method);
  return (bool)(~bVar1 & 1);
}


// ===== public static bool LCAEEPKOHMN(KeyData FMPJLBLNHMC, KeyData IHEPHBIPLPM)  [RVA 0x34D7A0C]
// KeyData$$LCAEEPKOHMN @ RVA 0x34D7A0C

bool KeyData__LCAEEPKOHMN
               (KeyData_o *FMPJLBLNHMC,KeyData_o *IHEPHBIPLPM,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  
  if ((DAT_045686e5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_045686e5 = 1;
  }
  if ((FMPJLBLNHMC != (KeyData_o *)0x0) && (IHEPHBIPLPM != (KeyData_o *)0x0)) {
    if (((FMPJLBLNHMC->fields).PBPNNKNICEE != (IHEPHBIPLPM->fields).PBPNNKNICEE) ||
       ((FMPJLBLNHMC->fields).BHJAGFIAEAA != (IHEPHBIPLPM->fields).BHJAGFIAEAA)) {
      return false;
    }
    pSVar1 = (FMPJLBLNHMC->fields).OOIGOEAHPMA;
    if ((pSVar1 != (System_Collections_Generic_List_int__o *)0x0) &&
       (pSVar2 = (IHEPHBIPLPM->fields).OOIGOEAHPMA,
       pSVar2 != (System_Collections_Generic_List_int__o *)0x0)) {
      if ((pSVar1->fields)._size != (pSVar2->fields)._size) {
        return false;
      }
      pSVar3 = (FMPJLBLNHMC->fields).KJNPENJKBKD;
      if ((pSVar3 != (System_Collections_Generic_List_int__o *)0x0) &&
         (pSVar4 = (IHEPHBIPLPM->fields).KJNPENJKBKD,
         pSVar4 != (System_Collections_Generic_List_int__o *)0x0)) {
        return ((pSVar3->fields)._size == (pSVar4->fields)._size && pSVar1 == pSVar2) &&
               pSVar3 == pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FOMNLFHELHO(int OAFGMHOFEKM)  [RVA 0x34D7AD4]
// KeyData$$FOMNLFHELHO @ RVA 0x34D7AD4

void KeyData__FOMNLFHELHO(KeyData_o *__this,int32_t OAFGMHOFEKM,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (-1 < OAFGMHOFEKM) {
    return;
  }
  KeyData__INFLJKCCKKI((__this->fields).KJNPENJKBKD,(MethodInfo *)(ulong)(uint)OAFGMHOFEKM);
  KeyData__INFLJKCCKKI((__this->fields).OOIGOEAHPMA,method_00);
  KeyData__INFLJKCCKKI((__this->fields).JCJPICMGIHE,method_01);
  return;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x34D7BDC]
// KeyData$$NDNPGAKJLHM @ RVA 0x34D7BDC

void KeyData__NDNPGAKJLHM(KeyData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045686e6 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    DAT_045686e6 = 1;
  }
  pSVar1 = (__this->fields).KJNPENJKBKD;
  if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    pSVar1 = (__this->fields).JCJPICMGIHE;
    if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
      (pSVar1->fields)._size = 0;
      (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
      (__this->fields).BHJAGFIAEAA = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public bool CENALFGNMKJ(KeyData JOIIFEDGBGK)  [RVA 0x34D7C44]
// KeyData$$CENALFGNMKJ @ RVA 0x34D7C44

bool KeyData__CENALFGNMKJ(KeyData_o *__this,KeyData_o *JOIIFEDGBGK,MethodInfo *method)

{
  bool bVar1;
  
  if (JOIIFEDGBGK == (KeyData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = KeyData__NPJAHLGMANI
                    ((__this->fields).OOIGOEAHPMA,(JOIIFEDGBGK->fields).OOIGOEAHPMA,method);
  if ((bVar1) &&
     (bVar1 = KeyData__NPJAHLGMANI
                        ((__this->fields).KJNPENJKBKD,(JOIIFEDGBGK->fields).KJNPENJKBKD,method),
     bVar1)) {
    bVar1 = KeyData__NPJAHLGMANI
                      ((__this->fields).JCJPICMGIHE,(JOIIFEDGBGK->fields).JCJPICMGIHE,method);
    return bVar1;
  }
  return false;
}


// ===== private static string JKNFAAKALMN(int EMKHEJGOMCF)  [RVA 0x34D7684]
// KeyData$$JKNFAAKALMN @ RVA 0x34D7684

System_String_o * KeyData__JKNFAAKALMN(int32_t EMKHEJGOMCF,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_045686e7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_13762/*"Throw"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_14067/*"U"*/);
    FUN_01bab630(&StringLiteral_8270/*"Kick"*/);
    FUN_01bab630(&StringLiteral_4996/*"DF"*/);
    FUN_01bab630(&StringLiteral_4977/*"D"*/);
    FUN_01bab630(&StringLiteral_14073/*"UB"*/);
    FUN_01bab630(&StringLiteral_3279/*"B"*/);
    FUN_01bab630(&StringLiteral_10576/*"Punch"*/);
    FUN_01bab630(&StringLiteral_12531/*"Super"*/);
    FUN_01bab630(&StringLiteral_4982/*"DB"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_14080/*"UF"*/);
    FUN_01bab630(&StringLiteral_6139/*"F"*/);
    DAT_045686e7 = 1;
  }
  if (EMKHEJGOMCF - 1U < 0xe) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_14067/*"U"*/_03fc68e8)[(int)(EMKHEJGOMCF - 1U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public void FOOHBJNHOKK(KeyData JOHFLOEABJL)  [RVA 0x34D7CF8]
// KeyData$$FOOHBJNHOKK @ RVA 0x34D7CF8

void KeyData__FOOHBJNHOKK(KeyData_o *__this,KeyData_o *JOHFLOEABJL,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)JOHFLOEABJL;
  if ((DAT_045686e8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    DAT_045686e8 = 1;
    method_00 = extraout_x1;
  }
  KeyData__NDNPGAKJLHM(__this,method_00);
  pSVar1 = (__this->fields).OOIGOEAHPMA;
  if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (JOHFLOEABJL != (KeyData_o *)0x0) {
      System_Collections_Generic_List<int>__AddRange
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)
                        (JOHFLOEABJL->fields).OOIGOEAHPMA,
                 Method_System_Collections_Generic_List<int>_AddRange__);
      pSVar1 = (__this->fields).KJNPENJKBKD;
      if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__AddRange
                  (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)
                          (JOHFLOEABJL->fields).KJNPENJKBKD,
                   Method_System_Collections_Generic_List<int>_AddRange__);
        pSVar1 = (__this->fields).JCJPICMGIHE;
        if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
          System_Collections_Generic_List<int>__AddRange
                    (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)
                            (JOHFLOEABJL->fields).JCJPICMGIHE,
                     Method_System_Collections_Generic_List<int>_AddRange__);
          (__this->fields).BHJAGFIAEAA = (JOHFLOEABJL->fields).BHJAGFIAEAA;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string HELJHKONFOI()  [RVA 0x34D7DA8]
// KeyData$$HELJHKONFOI @ RVA 0x34D7DA8

System_String_o * KeyData__HELJHKONFOI(KeyData_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int iVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  undefined8 *puVar8;
  int iVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined8 local_88;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  
  if ((DAT_045686e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&StringLiteral_11505/*"SEQUENCE"*/);
    FUN_01bab630(&StringLiteral_3313/*"BOTH"*/);
    FUN_01bab630(&StringLiteral_8249/*"KeyData: "*/);
    FUN_01bab630(&StringLiteral_2486/*"? "*/);
    FUN_01bab630(&StringLiteral_341/*" additional:"*/);
    FUN_01bab630(&StringLiteral_510/*" pressType:"*/);
    FUN_01bab630(&StringLiteral_1154/*","*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_21213/*"starter:"*/);
    DAT_045686e9 = 1;
  }
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  local_88 = 0;
  pSVar7 = (__this->fields).OOIGOEAHPMA;
  if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
    if ((pSVar7->fields)._size == 0) {
      pSVar7 = (__this->fields).KJNPENJKBKD;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_035d80d4;
      if ((pSVar7->fields)._size == 0) {
        return StringLiteral_1/*""*/;
      }
    }
    pSVar5 = System_String__Concat(StringLiteral_8249/*"KeyData: "*/,StringLiteral_21213/*"starter:"*/,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).OOIGOEAHPMA;
    if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List<int>__GetEnumerator
                (&local_a0,pSVar7,Method_System_Collections_Generic_List<int>_GetEnumerator__);
      iVar9 = 0;
      local_80._8_4_ = local_a0.fields._index;
      local_80._12_4_ = local_a0.fields._version;
      local_80._0_8_ = local_a0.fields._list;
      local_70 = local_a0.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                               ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                                Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
            pSVar1 = StringLiteral_1154/*","*/, pSVar3 = StringLiteral_1/*""*/, bVar4) {
        local_88 = CONCAT44((int32_t)local_70,(undefined4)local_88);
        pSVar7 = (__this->fields).OOIGOEAHPMA;
        if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = (pSVar7->fields)._size;
        pSVar6 = System_Int32__ToString((int)&local_88 + 4,(MethodInfo *)0x0);
        if (iVar2 + -1 <= iVar9) {
          pSVar1 = pSVar3;
        }
        pSVar5 = System_String__Concat(pSVar5,pSVar6,pSVar1,(MethodInfo *)0x0);
        iVar9 = iVar9 + 1;
      }
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
      pSVar5 = System_String__Concat(pSVar5,StringLiteral_341/*" additional:"*/,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).KJNPENJKBKD;
      if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__GetEnumerator
                  (&local_a0,pSVar7,Method_System_Collections_Generic_List<int>_GetEnumerator__);
        iVar9 = 0;
        local_80._8_4_ = local_a0.fields._index;
        local_80._12_4_ = local_a0.fields._version;
        local_80._0_8_ = local_a0.fields._list;
        local_70 = local_a0.fields._current;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                            ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                             Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
          pSVar1 = StringLiteral_1154/*","*/;
          pSVar3 = StringLiteral_1/*""*/;
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator<int>__Dispose
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                       Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
            pSVar5 = System_String__Concat(pSVar5,StringLiteral_510/*" pressType:"*/,(MethodInfo *)0x0);
            iVar9 = (__this->fields).BHJAGFIAEAA;
            if (iVar9 == 0) {
              puVar8 = &StringLiteral_3313/*"BOTH"*/;
            }
            else if (iVar9 == 1) {
              puVar8 = &StringLiteral_11505/*"SEQUENCE"*/;
            }
            else {
              puVar8 = &StringLiteral_2486/*"? "*/;
            }
            pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar8,(MethodInfo *)0x0);
            return pSVar5;
          }
          local_88 = CONCAT44(local_88._4_4_,(int32_t)local_70);
          pSVar7 = (__this->fields).KJNPENJKBKD;
          if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
          iVar2 = (pSVar7->fields)._size;
          pSVar6 = System_Int32__ToString((int32_t)&local_88,(MethodInfo *)0x0);
          if (iVar2 + -1 <= iVar9) {
            pSVar1 = pSVar3;
          }
          pSVar5 = System_String__Concat(pSVar5,pSVar6,pSVar1,(MethodInfo *)0x0);
          iVar9 = iVar9 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_035d80d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void INFLJKCCKKI(List<int> PBDIPLHDHHD)  [RVA 0x34D7B00]
// KeyData$$INFLJKCCKKI @ RVA 0x34D7B00

void KeyData__INFLJKCCKKI
               (System_Collections_Generic_List_int__o *PBDIPLHDHHD,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int index;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = PBDIPLHDHHD;
  if ((DAT_045686ea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<int>_set_Item__);
    DAT_045686ea = 1;
  }
  if (PBDIPLHDHHD != (System_Collections_Generic_List_int__o *)0x0) {
    if (0 < (PBDIPLHDHHD->fields)._size) {
      index = 0;
      do {
        iVar2 = System_Collections_Generic_List<int>__get_Item
                          (PBDIPLHDHHD,index,Method_System_Collections_Generic_List<int>_get_Item__)
        ;
        uVar1 = iVar2 - 2;
        if ((uVar1 < 7) && ((0x77U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          System_Collections_Generic_List<int>__set_Item
                    (PBDIPLHDHHD,index,*(int32_t *)(&DAT_00e29a3c + (long)(int)uVar1 * 4),
                     Method_System_Collections_Generic_List<int>_set_Item__);
        }
        index = index + 1;
      } while (index < (PBDIPLHDHHD->fields)._size);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== private static bool NPJAHLGMANI(List<int> AGMLOOEEMGE, List<int> GNNGMMCLPOH)  [RVA 0x34D7CA0]
// KeyData$$NPJAHLGMANI @ RVA 0x34D7CA0

bool KeyData__NPJAHLGMANI
               (System_Collections_Generic_List_int__o *AGMLOOEEMGE,
               System_Collections_Generic_List_int__o *GNNGMMCLPOH,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045686eb & 1) == 0) {
    FUN_01bab630(&Method_NKOIBKNPICN_OFABBFOGEAK<int>__);
    DAT_045686eb = 1;
  }
  bVar1 = KeyData__OFABBFOGEAK<int>
                    ((System_Collections_Generic_List_T__o *)GNNGMMCLPOH,
                     (System_Collections_Generic_List_T__o *)AGMLOOEEMGE,
                     Method_NKOIBKNPICN_OFABBFOGEAK<int>__);
  return bVar1;
}


// ===== public KeyData GOGPCNMIJOB()  [RVA 0x34D81C8]
// KeyData$$GOGPCNMIJOB @ RVA 0x34D81C8

KeyData_o * KeyData__GOGPCNMIJOB(KeyData_o *__this,MethodInfo *method)

{
  KeyData_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045686ec & 1) == 0) {
    FUN_01bab630(&KeyData_TypeInfo);
    DAT_045686ec = 1;
    method = extraout_x1;
  }
  __this_00 = (KeyData_o *)thunk_FUN_01bda818(KeyData_TypeInfo,method);
  KeyData___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x34D83C4]
// KeyData$$.ctor @ RVA 0x34D83C4

void KeyData___ctor(KeyData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686ed & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_045686ed = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  (__this->fields).OOIGOEAHPMA = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).KJNPENJKBKD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).JCJPICMGIHE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PBPNNKNICEE = false;
  (__this->fields).BHJAGFIAEAA = 0;
  return;
}


// ===== public void .ctor(KeyData JOHFLOEABJL)  [RVA 0x34D8220]
// KeyData$$.ctor @ RVA 0x34D8220

void KeyData___ctor(KeyData_o *__this,KeyData_o *JOHFLOEABJL,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  System_Collections_Generic_List_int__o **ppSVar3;
  KeyData_Fields *pNVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  
  if ((DAT_045686ee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_045686ee = 1;
  }
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  pNVar4 = &__this->fields;
  pNVar4->OOIGOEAHPMA = pSVar1;
  thunk_FUN_01c20e04(pNVar4,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar3 = &(__this->fields).KJNPENJKBKD;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).JCJPICMGIHE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JOHFLOEABJL != (KeyData_o *)0x0) {
    pSVar5 = (JOHFLOEABJL->fields).OOIGOEAHPMA;
    pSVar1 = (System_Collections_Generic_List_int__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               Method_System_Collections_Generic_List<int>__ctor__);
    (__this->fields).OOIGOEAHPMA = pSVar1;
    thunk_FUN_01c20e04(pNVar4,pSVar1);
    pSVar5 = (JOHFLOEABJL->fields).KJNPENJKBKD;
    pSVar1 = (System_Collections_Generic_List_int__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               Method_System_Collections_Generic_List<int>__ctor__);
    (__this->fields).KJNPENJKBKD = pSVar1;
    thunk_FUN_01c20e04(ppSVar3,pSVar1);
    pSVar5 = (JOHFLOEABJL->fields).JCJPICMGIHE;
    pSVar1 = (System_Collections_Generic_List_int__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               Method_System_Collections_Generic_List<int>__ctor__);
    (__this->fields).JCJPICMGIHE = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    (__this->fields).BHJAGFIAEAA = (JOHFLOEABJL->fields).BHJAGFIAEAA;
    (__this->fields).PBPNNKNICEE = (JOHFLOEABJL->fields).PBPNNKNICEE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

