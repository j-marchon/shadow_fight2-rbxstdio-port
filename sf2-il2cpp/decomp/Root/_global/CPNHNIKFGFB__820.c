// TypeDefIndex 820
// Namespace: 
// public class CPNHNIKFGFB
// Fields:
//   private static CPNHNIKFGFB CBDMFFMCJBK; // 0x0
//   private List<int> FNOGEEODGCE; // 0x10
//   private Dictionary<int, Action<object>> JGMOJNCMKAG; // 0x18

// ===== private void JAFNPFDOHAP(object IMMNELPBGIF)  [RVA 0x3078B88]
// CPNHNIKFGFB$$JAFNPFDOHAP @ RVA 0x3078B88

void CPNHNIKFGFB__JAFNPFDOHAP(CPNHNIKFGFB_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  Il2CppObject *local_28;
  
  if ((DAT_04565fc3 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OLAGEPMKJFC<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_TryGetValue__);
    DAT_04565fc3 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<int>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).FNOGEEODGCE,
                     Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
  if (bVar1) {
    thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
    __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_19625/*"may be double call this method, see stacktrace"*/);
    System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_CPNHNIKFGFB_JAFNPFDOHAP__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_00,uVar2);
  }
  key = DJNBJHPDKDP__OLAGEPMKJFC<int>
                  ((System_Collections_Generic_List_T__o *)(__this->fields).FNOGEEODGCE,
                   Method_DJNBJHPDKDP_OLAGEPMKJFC<int>__);
  local_28 = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__TryGetValue
                      (pSVar3,key,&local_28,
                       Method_System_Collections_Generic_Dictionary<int,_Action<object>>_TryGetValue__
                      );
    if (bVar1) {
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
      if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03178c84;
      System_Collections_Generic_Dictionary<int,_object>__Remove
                (pSVar3,key,
                 Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Remove__);
    }
    if (local_28 != (Il2CppObject *)0x0) {
      (*local_28[1].monitor)(local_28[4].klass,IMMNELPBGIF,local_28[2].monitor);
    }
    return;
  }
LAB_03178c84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DIGPCFKCCBK(int CEOLOKFCKIG, Action<object> CPECAEHDDDB)  [RVA 0x3078CD0]
// CPNHNIKFGFB$$DIGPCFKCCBK @ RVA 0x3078CD0

void CPNHNIKFGFB__DIGPCFKCCBK
               (CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,System_Action_object__o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Action_object__o *method_00;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_04565fc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_set_Item__);
    DAT_04565fc4 = 1;
  }
  bVar1 = CPNHNIKFGFB__KNNDANLJOEB(__this,CEOLOKFCKIG,(MethodInfo *)method_00);
  if (bVar1) {
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                        (pSVar2,CEOLOKFCKIG,
                         Method_System_Collections_Generic_Dictionary<int,_Action<object>>_ContainsKey__
                        );
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        if (bVar1) {
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (pSVar2,CEOLOKFCKIG,(Il2CppObject *)CPECAEHDDDB,
                     Method_System_Collections_Generic_Dictionary<int,_Action<object>>_set_Item__);
        }
        else {
          System_Collections_Generic_Dictionary<int,_object>__Add
                    (pSVar2,CEOLOKFCKIG,(Il2CppObject *)CPECAEHDDDB,
                     Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Add__);
        }
        CPNHNIKFGFB__BENGKDEEPGK(__this,CEOLOKFCKIG,(MethodInfo *)CPECAEHDDDB);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private bool KNNDANLJOEB(int CEOLOKFCKIG)  [RVA 0x3078DC0]
// CPNHNIKFGFB$$KNNDANLJOEB @ RVA 0x3078DC0

bool CPNHNIKFGFB__KNNDANLJOEB(CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if ((DAT_04565fc5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_04565fc5 = 1;
  }
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  if (CEOLOKFCKIG == 0) {
    bVar1 = false;
  }
  else {
    __this_00 = (__this->fields).FNOGEEODGCE;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_58,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_40._8_4_ = local_58.fields._index;
    local_40._12_4_ = local_58.fields._version;
    local_40._0_8_ = local_58.fields._list;
    local_30 = local_58.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        iVar2 = 6;
        goto LAB_03178e90;
      }
    } while ((int32_t)local_30 != CEOLOKFCKIG);
    iVar2 = 5;
LAB_03178e90:
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    bVar1 = iVar2 != 5;
  }
  return bVar1;
}


// ===== private void BENGKDEEPGK(int CEOLOKFCKIG)  [RVA 0x3078F1C]
// CPNHNIKFGFB$$BENGKDEEPGK @ RVA 0x3078F1C

void CPNHNIKFGFB__BENGKDEEPGK(CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *KCFLBKINDFM;
  System_Collections_Generic_List_int__o *__this_00;
  System_String_o *pSVar3;
  System_Action_object__o *IELDNEAAPBE;
  System_Int32_array *pSVar4;
  undefined8 *puVar5;
  System_String_o *pSVar6;
  System_String_o *EHNFGMGKCHO;
  int32_t local_44;
  
  local_44 = CEOLOKFCKIG;
  if ((DAT_04565fc6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CPNHNIKFGFB_JAFNPFDOHAP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&StringLiteral_3682/*"CLAN_NOT_FOUND"*/);
    FUN_01bab630(&StringLiteral_3680/*"CLAN_NOT_ENOUGH_PERMISSIONS"*/);
    FUN_01bab630(&StringLiteral_8862/*"MatchingTimeout"*/);
    FUN_01bab630(&StringLiteral_3675/*"CLAN_IS_CLOSED"*/);
    FUN_01bab630(&StringLiteral_17778/*"dlgDamageRejectTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17798/*"dlgMaintance"*/);
    FUN_01bab630(&StringLiteral_3678/*"CLAN_MEMBER_NOT_IN_RAID"*/);
    FUN_01bab630(&StringLiteral_17761/*"dlgBpPremiumRequired"*/);
    FUN_01bab630(&StringLiteral_3676/*"CLAN_IS_FULL"*/);
    FUN_01bab630(&StringLiteral_15149/*"YOU_WERE_RECENTLY_KICKED_FROM_THIS_RAID"*/);
    FUN_01bab630(&StringLiteral_17777/*"dlgDamageRejectText"*/);
    FUN_01bab630(&StringLiteral_11862/*"ServerRebooting"*/);
    FUN_01bab630(&StringLiteral_17792/*"dlgFinalFightError"*/);
    FUN_01bab630(&StringLiteral_4301/*"CheckInternet"*/);
    FUN_01bab630(&StringLiteral_3681/*"CLAN_NOT_ENOUGH_RATING"*/);
    FUN_01bab630(&StringLiteral_10321/*"PlayerNotFound"*/);
    FUN_01bab630(&StringLiteral_17762/*"dlgBpRewardAlreadyClaimed"*/);
    FUN_01bab630(&StringLiteral_17760/*"dlgBpNotEnoughPoints"*/);
    FUN_01bab630(&StringLiteral_17775/*"dlgConnectionLost"*/);
    FUN_01bab630(&StringLiteral_17786/*"dlgErrorJoinMatcher"*/);
    FUN_01bab630(&StringLiteral_17757/*"dlgBpDisabled"*/);
    FUN_01bab630(&StringLiteral_17759/*"dlgBpInvalidRewardIndex"*/);
    FUN_01bab630(&StringLiteral_3684/*"CLAN_UNKNOWN_MEMBER"*/);
    FUN_01bab630(&StringLiteral_11508/*"SERVER_RESPONSE_ERROR"*/);
    FUN_01bab630(&StringLiteral_3679/*"CLAN_NAME_ENGAGED"*/);
    FUN_01bab630(&StringLiteral_3677/*"CLAN_IS_NOT_EMPTY"*/);
    FUN_01bab630(&StringLiteral_9304/*"NOT_ALLOWED_IN_CLAN_RAID"*/);
    FUN_01bab630(&StringLiteral_13948/*"TryRelogin"*/);
    FUN_01bab630(&StringLiteral_9623/*"NotEnoughRubies"*/);
    FUN_01bab630(&StringLiteral_3683/*"CLAN_RAID_IS_FULL"*/);
    FUN_01bab630(&StringLiteral_11509/*"SERVER_RESPONSE_ERROR: "*/);
    FUN_01bab630(&StringLiteral_17758/*"dlgBpInvalidName"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_20395/*"raid_badnickname"*/);
    FUN_01bab630(&StringLiteral_15148/*"YOU_WERE_RECENTLY_KICKED_FROM_THIS_CLAN"*/);
    DAT_04565fc6 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<int>_Add__;
  __this_00 = (__this->fields).FNOGEEODGCE;
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_0317951c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pSVar4 == (System_Int32_array *)0x0) goto LAB_0317951c;
  uVar1 = (__this_00->fields)._size;
  if (uVar1 < (uint)pSVar4->max_length) {
    (__this_00->fields)._size = uVar1 + 1;
    pSVar4->m_Items[(int)uVar1] = CEOLOKFCKIG;
  }
  else {
    System_Collections_Generic_List<int>__AddWithResize
              (__this_00,CEOLOKFCKIG,
               *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
  }
  pSVar3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  System_String__Concat(StringLiteral_11509/*"SERVER_RESPONSE_ERROR: "*/,pSVar3,(MethodInfo *)0x0);
  KCFLBKINDFM = StringLiteral_9679/*"OK"*/;
  pSVar3 = StringLiteral_1/*""*/;
  pSVar6 = StringLiteral_5840/*"Error"*/;
  if (local_44 < 0x2717) {
    switch(local_44) {
    case 10000:
      puVar5 = &StringLiteral_10321/*"PlayerNotFound"*/;
      break;
    case 0x2714:
switchD_03179238_caseD_29cb:
      puVar5 = &StringLiteral_9623/*"NotEnoughRubies"*/;
      break;
    case 0x2715:
      puVar5 = &StringLiteral_20395/*"raid_badnickname"*/;
      break;
    case 0x2716:
      puVar5 = &StringLiteral_11862/*"ServerRebooting"*/;
      break;
    default:
      if (local_44 == 1) {
        puVar5 = &StringLiteral_5840/*"Error"*/;
        break;
      }
    case 0x2711:
    case 0x2712:
    case 0x2713:
switchD_03179238_caseD_29c4:
      puVar5 = &StringLiteral_11508/*"SERVER_RESPONSE_ERROR"*/;
    }
  }
  else {
    puVar5 = &StringLiteral_3682/*"CLAN_NOT_FOUND"*/;
    switch(local_44) {
    case 0x2775:
      puVar5 = &StringLiteral_3679/*"CLAN_NAME_ENGAGED"*/;
      break;
    case 0x2776:
      break;
    case 0x2777:
      puVar5 = &StringLiteral_3684/*"CLAN_UNKNOWN_MEMBER"*/;
      break;
    case 0x2778:
      puVar5 = &StringLiteral_3676/*"CLAN_IS_FULL"*/;
      break;
    case 0x2779:
      puVar5 = &StringLiteral_3681/*"CLAN_NOT_ENOUGH_RATING"*/;
      break;
    case 0x277a:
      puVar5 = &StringLiteral_3678/*"CLAN_MEMBER_NOT_IN_RAID"*/;
      break;
    case 0x277b:
      puVar5 = &StringLiteral_3677/*"CLAN_IS_NOT_EMPTY"*/;
      break;
    case 0x277c:
      puVar5 = &StringLiteral_3680/*"CLAN_NOT_ENOUGH_PERMISSIONS"*/;
      break;
    case 0x277d:
      puVar5 = &StringLiteral_3675/*"CLAN_IS_CLOSED"*/;
      break;
    case 0x277e:
      puVar5 = &StringLiteral_15149/*"YOU_WERE_RECENTLY_KICKED_FROM_THIS_RAID"*/;
      break;
    case 0x277f:
      puVar5 = &StringLiteral_15148/*"YOU_WERE_RECENTLY_KICKED_FROM_THIS_CLAN"*/;
      break;
    case 0x2780:
      puVar5 = &StringLiteral_3683/*"CLAN_RAID_IS_FULL"*/;
      break;
    case 0x2781:
      puVar5 = &StringLiteral_9304/*"NOT_ALLOWED_IN_CLAN_RAID"*/;
      break;
    default:
      switch(local_44) {
      case 0x29c2:
        puVar5 = &StringLiteral_8862/*"MatchingTimeout"*/;
        break;
      case 0x29c3:
        puVar5 = &StringLiteral_17786/*"dlgErrorJoinMatcher"*/;
        break;
      case 0x29c4:
        goto switchD_03179238_caseD_29c4;
      case 0x29c5:
        puVar5 = &StringLiteral_17778/*"dlgDamageRejectTitle"*/;
        break;
      case 0x29c6:
        puVar5 = &StringLiteral_17777/*"dlgDamageRejectText"*/;
        break;
      case 0x29c7:
        puVar5 = &StringLiteral_17792/*"dlgFinalFightError"*/;
        break;
      case 0x29c8:
        puVar5 = &StringLiteral_4301/*"CheckInternet"*/;
        break;
      case 0x29c9:
        puVar5 = &StringLiteral_17798/*"dlgMaintance"*/;
        break;
      case 0x29ca:
        puVar5 = &StringLiteral_13948/*"TryRelogin"*/;
        pSVar6 = StringLiteral_17775/*"dlgConnectionLost"*/;
        break;
      case 0x29cb:
        goto switchD_03179238_caseD_29cb;
      default:
        switch(local_44) {
        case 0x27d8:
          puVar5 = &StringLiteral_17757/*"dlgBpDisabled"*/;
          break;
        case 0x27d9:
          puVar5 = &StringLiteral_17758/*"dlgBpInvalidName"*/;
          break;
        case 0x27da:
          puVar5 = &StringLiteral_17762/*"dlgBpRewardAlreadyClaimed"*/;
          break;
        case 0x27db:
          puVar5 = &StringLiteral_17760/*"dlgBpNotEnoughPoints"*/;
          break;
        case 0x27dc:
          puVar5 = &StringLiteral_17761/*"dlgBpPremiumRequired"*/;
          break;
        case 0x27dd:
          puVar5 = &StringLiteral_17759/*"dlgBpInvalidRewardIndex"*/;
          break;
        default:
          goto switchD_03179238_caseD_29c4;
        }
      }
    }
  }
  EHNFGMGKCHO = (System_String_o *)*puVar5;
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    JJPNLEPEAFM__OOOIOMHJONP
              (pSVar6,EHNFGMGKCHO,KCFLBKINDFM,pSVar3,IELDNEAAPBE,1,0,false,false,StringLiteral_1/*""*/,
               true,true,true,(MethodInfo *)0x0);
  }
  return;
}


// ===== public void DIGPCFKCCBK(int CEOLOKFCKIG)  [RVA 0x3079520]
// CPNHNIKFGFB$$DIGPCFKCCBK @ RVA 0x3079520

void CPNHNIKFGFB__DIGPCFKCCBK(CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  System_String_o *message;
  int32_t local_24;
  
  if ((DAT_04565fc7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_7789/*"Invalid error {0}"*/);
    DAT_04565fc7 = 1;
  }
  bVar1 = CPNHNIKFGFB__KNNDANLJOEB(__this,CEOLOKFCKIG,method);
  if (bVar1) {
    CPNHNIKFGFB__BENGKDEEPGK(__this,CEOLOKFCKIG,method);
    return;
  }
  local_24 = CEOLOKFCKIG;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  message = System_String__Format(StringLiteral_7789/*"Invalid error {0}"*/,arg0,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// ===== public static CPNHNIKFGFB AIHNLLGNBLC()  [RVA 0x3079604]
// CPNHNIKFGFB$$AIHNLLGNBLC @ RVA 0x3079604

CPNHNIKFGFB_o * CPNHNIKFGFB__AIHNLLGNBLC(MethodInfo *method)

{
  CPNHNIKFGFB_o *pCVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04565fc8 & 1) == 0) {
    FUN_01bab630(&CPNHNIKFGFB_TypeInfo);
    DAT_04565fc8 = 1;
  }
  pCVar1 = CPNHNIKFGFB_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pCVar1 == (CPNHNIKFGFB_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pCVar1 = auVar2._0_8_;
    CPNHNIKFGFB___ctor(pCVar1,auVar2._8_8_);
    CPNHNIKFGFB_TypeInfo->static_fields->CBDMFFMCJBK = pCVar1;
    thunk_FUN_01c20e04(CPNHNIKFGFB_TypeInfo->static_fields,pCVar1);
    pCVar1 = CPNHNIKFGFB_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pCVar1;
}


// ===== private void .ctor()  [RVA 0x3079688]
// CPNHNIKFGFB$$.ctor @ RVA 0x3079688

void CPNHNIKFGFB___ctor(CPNHNIKFGFB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__Action_object___o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565fc9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_Action<object>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_04565fc9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  (__this->fields).FNOGEEODGCE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_Action<object>>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<int,_Action<object>>__ctor__);
  ppSVar1 = &(__this->fields).JGMOJNCMKAG;
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__Action_object___o *)__this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

