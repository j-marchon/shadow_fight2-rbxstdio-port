// TypeDefIndex 2321
// Namespace: 
// public static class CMCJGLAABFO
// Fields:
//   private static Dictionary<string, IENLNOEDCFF.ACAJADECPLB> MNCEELOCEDI; // 0x0
//   private static Dictionary<string, DMMJFKCBHEK> HHGGEFNDOCL; // 0x8
//   private static Dictionary<string, PNGKLCHKPEO.NOLNDEAFBEL> LLHKIPGGPKG; // 0x10

// ===== public static int ENNCOIHDFKP(CMCJGLAABFO.NNLDBLLCHFL GJMEFGJIFJD, string CJNHFNHJHPE)  [RVA 0x331D624]
// CMCJGLAABFO$$ENNCOIHDFKP @ RVA 0x331D624

int32_t CMCJGLAABFO__ENNCOIHDFKP
                  (int32_t GJMEFGJIFJD,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *pSVar3;
  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *__this;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04567827 & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_ContainsKey__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_get_Item__);
    FUN_01bab630(&CMCJGLAABFO_NNLDBLLCHFL_TypeInfo);
    FUN_01bab630(&StringLiteral_5575/*"ERROR: MovesMaps::getIndex - no map for index: "*/);
    DAT_04567827 = 1;
  }
  if (GJMEFGJIFJD == 1) {
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      __this = CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
      if (__this != (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)0x0)
      {
        bVar1 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (Il2CppObject *)CJNHFNHJHPE,
                           Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_ContainsKey__
                          );
        if (!bVar1) {
          return 0;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)
                 CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
          puVar5 = &
                   Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_get_Item__
          ;
          goto LAB_0341d754;
        }
      }
      goto LAB_0341d7f4;
    }
  }
  else {
    if (GJMEFGJIFJD != 0) {
      local_38.klass = (System_Enum_c *)CMCJGLAABFO_NNLDBLLCHFL_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      local_28 = GJMEFGJIFJD;
      pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_5575/*"ERROR: MovesMaps::getIndex - no map for index: "*/,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      return -1;
    }
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)CJNHFNHJHPE,
                           Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_ContainsKey__
                          );
        if (!bVar1) {
          return 0;
        }
        pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
          puVar5 = &Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_get_Item__;
LAB_0341d754:
          iVar2 = System_Collections_Generic_Dictionary<object,_Int32Enum>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                             (Il2CppObject *)CJNHFNHJHPE,(MethodInfo_232FF88 *)*puVar5);
          return iVar2;
        }
      }
LAB_0341d7f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return 0;
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x331D7F8]
// CMCJGLAABFO$$NDNPGAKJLHM @ RVA 0x331D7F8

void CMCJGLAABFO__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o **ppSVar1;
  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o **ppSVar2;
  CMCJGLAABFO_StaticFields *pCVar3;
  
  if ((DAT_04567828 & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Clear__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Clear__
                );
    DAT_04567828 = 1;
  }
  pCVar3 = CMCJGLAABFO_TypeInfo->static_fields;
  if (pCVar3->MNCEELOCEDI !=
      (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar3->MNCEELOCEDI,
               Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Clear__
              );
    pCVar3 = CMCJGLAABFO_TypeInfo->static_fields;
  }
  if (pCVar3->HHGGEFNDOCL != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar3->HHGGEFNDOCL,
               Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Clear__);
    pCVar3 = CMCJGLAABFO_TypeInfo->static_fields;
  }
  if (pCVar3->LLHKIPGGPKG !=
      (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar3->LLHKIPGGPKG,
               Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Clear__
              );
  }
  CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI =
       (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0;
  thunk_FUN_01c20e04(CMCJGLAABFO_TypeInfo->static_fields,0);
  ppSVar1 = &CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar2 = &CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}


// ===== public static void GIENGNEGHPJ()  [RVA 0x331D8F8]
// CMCJGLAABFO$$GIENGNEGHPJ @ RVA 0x331D8F8

void CMCJGLAABFO__GIENGNEGHPJ(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *pSVar1;
  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *pSVar2;
  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o **ppSVar3;
  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *pSVar4;
  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o **ppSVar5;
  
  if ((DAT_04567829 & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_TypeInfo);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_14572/*"Up-Forward"*/);
    FUN_01bab630(&StringLiteral_8262/*"Keys"*/);
    FUN_01bab630(&StringLiteral_11734/*"Screen"*/);
    FUN_01bab630(&StringLiteral_3443/*"BattleType"*/);
    FUN_01bab630(&StringLiteral_11439/*"RoundStage"*/);
    FUN_01bab630(&StringLiteral_5472/*"Down"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_5474/*"Down-Forward"*/);
    FUN_01bab630(&StringLiteral_8270/*"Kick"*/);
    FUN_01bab630(&StringLiteral_3696/*"COM"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9172/*"ModelExists"*/);
    FUN_01bab630(&StringLiteral_9174/*"ModelMirrored"*/);
    FUN_01bab630(&StringLiteral_6564/*"Forward"*/);
    FUN_01bab630(&StringLiteral_14851/*"Wall"*/);
    FUN_01bab630(&StringLiteral_5423/*"Distance"*/);
    FUN_01bab630(&StringLiteral_3603/*"Bullets"*/);
    FUN_01bab630(&StringLiteral_7059/*"Health"*/);
    FUN_01bab630(&StringLiteral_9548/*"Nodes"*/);
    FUN_01bab630(&StringLiteral_7119/*"Hit"*/);
    FUN_01bab630(&StringLiteral_6500/*"Floor"*/);
    FUN_01bab630(&StringLiteral_4940/*"CurrentAnimation"*/);
    FUN_01bab630(&StringLiteral_14570/*"Up"*/);
    FUN_01bab630(&StringLiteral_3545/*"BossAbilityState"*/);
    FUN_01bab630(&StringLiteral_14571/*"Up-Back"*/);
    FUN_01bab630(&StringLiteral_9145/*"ModExists"*/);
    FUN_01bab630(&StringLiteral_10263/*"PhysicsFrameNumber"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_10576/*"Punch"*/);
    FUN_01bab630(&StringLiteral_12531/*"Super"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_8826/*"MapCenter"*/);
    FUN_01bab630(&StringLiteral_4945/*"CurrentInterval"*/);
    FUN_01bab630(&StringLiteral_3495/*"Birth"*/);
    FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
    FUN_01bab630(&StringLiteral_5473/*"Down-Back"*/);
    FUN_01bab630(&StringLiteral_5391/*"Direction"*/);
    FUN_01bab630(&StringLiteral_11438/*"RoundResult"*/);
    FUN_01bab630(&StringLiteral_10276/*"Pivot"*/);
    method = (MethodInfo *)FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    DAT_04567829 = 1;
  }
  CMCJGLAABFO__NDNPGAKJLHM(method);
  pSVar1 = (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>__ctor__);
  CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI = pSVar1;
  thunk_FUN_01c20e04(CMCJGLAABFO_TypeInfo->static_fields,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>__ctor__);
  ppSVar3 = &CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar4 = (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
             Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>__ctor__);
  ppSVar5 = &CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,StringLiteral_11439/*"RoundStage"*/,1
               ,Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__)
    ;
    pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
                    /* try { // try from 0341dcb4 to 0351dd5f has its CatchHandler @ 0341dcb4
                       catch() { ... } // from try @ 0341dcb4 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341dfd0 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341e054 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341e084 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341e164 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341e200 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341e280 with catch @ 0341dcb4
                       catch() { ... } // from try @ 0341e328 with catch @ 0341dcb4 */
      System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,StringLiteral_8262/*"Keys"*/,
                 4,
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                );
      pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0)
      {
        System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                   StringLiteral_5423/*"Distance"*/,2,
                   Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                  );
        pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
        if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)
                      0x0) {
          System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                     StringLiteral_5391/*"Direction"*/,0x15,
                     Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                    );
          pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
          if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)
                        0x0) {
            System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       StringLiteral_14870/*"Weapon"*/,5,
                       Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                      );
            pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
            if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                           *)0x0) {
              System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                         StringLiteral_10305/*"Player"*/,6,
                         Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                        );
                    /* try { // try from 0341dd60 to 0351dd6f has its CatchHandler @ 0341e09c */
              pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
              if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                             *)0x0) {
                    /* try { // try from 0341dd7c to 0351dd93 has its CatchHandler @ 0341e098 */
                System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           StringLiteral_7059/*"Health"*/,7,
                           Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                          );
                pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                               *)0x0) {
                    /* try { // try from 0341dda0 to 0351dda7 has its CatchHandler @ 0341e088 */
                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                             StringLiteral_9968/*"Operator"*/,8,
                             Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                            );
                  pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                 *)0x0) {
                    /* try { // try from 0341ddcc to 0351dddb has its CatchHandler @ 0341e17c */
                    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                               StringLiteral_4945/*"CurrentInterval"*/,9,
                               Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                              );
                    pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                    if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                   *)0x0) {
                    /* try { // try from 0341ddf8 to 0351de07 has its CatchHandler @ 0341e178 */
                      System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                 StringLiteral_4940/*"CurrentAnimation"*/,10,
                                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                );
                      pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                      if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                     *)0x0) {
                    /* try { // try from 0341de1c to 0351de27 has its CatchHandler @ 0341e090 */
                        System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                   StringLiteral_10263/*"PhysicsFrameNumber"*/,0xb,
                                   Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                  );
                    /* try { // try from 0341de2c to 0351de3f has its CatchHandler @ 0341e08c */
                        pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                        if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                       *)0x0) {
                          System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1
                                     ,StringLiteral_11438/*"RoundResult"*/,0xc,
                                     Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                    );
                    /* try { // try from 0341de50 to 0351de57 has its CatchHandler @ 0341e0cc */
                          pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                          if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                         *)0x0) {
                    /* try { // try from 0341de5c to 0351de63 has its CatchHandler @ 0341e0d0 */
                            System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                       pSVar1,StringLiteral_8095/*"Item"*/,0xd,
                                       Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                      );
                    /* try { // try from 0341de74 to 0351de7b has its CatchHandler @ 0341e0c4 */
                            pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                    /* try { // try from 0341de80 to 0351de87 has its CatchHandler @ 0341e0c8 */
                            if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                           *)0x0) {
                    /* try { // try from 0341de8c to 0351de9b has its CatchHandler @ 0341e0bc */
                              System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                         pSVar1,StringLiteral_10213/*"Perk"*/,0xf,
                                         Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                        );
                    /* try { // try from 0341de9c to 0351dea7 has its CatchHandler @ 0341e0c0 */
                              pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                              if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                             *)0x0) {
                                System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                           pSVar1,StringLiteral_3603/*"Bullets"*/,0xe,
                                           Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                          );
                                pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                                if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                               *)0x0) {
                    /* try { // try from 0341dee0 to 0351df07 has its CatchHandler @ 0341e0b8 */
                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                              *)pSVar1,StringLiteral_3495/*"Birth"*/,0x10,
                                             Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                            );
                                  pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                                  if (pSVar1 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                 *)0x0) {
                                    System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                              ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                *)pSVar1,StringLiteral_9327/*"Name"*/,0x11,
                                               Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                              );
                                    pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                                    if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                                      System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                ((System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_11734/*"Screen"*/,0x12,
                                                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                );
                    /* try { // try from 0341df44 to 0351df6b has its CatchHandler @ 0341e0a0 */
                                      pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                                      if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                                        System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                  ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_9174/*"ModelMirrored"*/,0x13,
                                                  Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                  );
                                        pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                                        if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                                          System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                    ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_9145/*"ModExists"*/,0x14,
                                                  Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                  );
                                          pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
                                          if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                    /* try { // try from 0341dfa8 to 0351dfcf has its CatchHandler @ 0341e0ac */
                                            System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                      ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_3443/*"BattleType"*/,0x16,
                                                  Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                  );
                                            pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->
                                                     MNCEELOCEDI;
                                            if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                    /* try { // try from 0341dfd0 to 0351e04f has its CatchHandler @ 0341dcb4 */
                                              System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                        ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_3545/*"BossAbilityState"*/,0x17,
                                                  Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                  );
                                              pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->
                                                       MNCEELOCEDI;
                                              if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                                                System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                          ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_7119/*"Hit"*/,0x18,
                                                  Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                  );
                                                pSVar1 = CMCJGLAABFO_TypeInfo->static_fields->
                                                         MNCEELOCEDI;
                                                if (pSVar1 != (
                                                  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o
                                                  *)0x0) {
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar1,StringLiteral_9172/*"ModelExists"*/,0x19,
                                                  Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e050 to 0351e053 has its CatchHandler @ 0341e174 */
                    /* try { // try from 0341e054 to 0351e05b has its CatchHandler @ 0341dcb4 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_14570/*"Up"*/,1,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                    /* try { // try from 0341e05c to 0351e063 has its CatchHandler @ 0341e094 */
                    /* try { // try from 0341e064 to 0351e06b has its CatchHandler @ 0341e0ac */
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e06c to 0351e073 has its CatchHandler @ 0341e0a0 */
                    /* try { // try from 0341e074 to 0351e077 has its CatchHandler @ 0341e090 */
                    /* try { // try from 0341e078 to 0351e07b has its CatchHandler @ 0341e084 */
                    /* try { // try from 0341e07c to 0351e083 has its CatchHandler @ 0341e0b8 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_14572/*"Up-Forward"*/,2,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                    /* catch() { ... } // from try @ 0341e078 with catch @ 0341e084
                       try { // try from 0341e084 to 0351e0eb has its CatchHandler @ 0341dcb4 */
                    /* catch() { ... } // from try @ 0341dda0 with catch @ 0341e088 */
                    /* catch() { ... } // from try @ 0341de2c with catch @ 0341e08c */
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                    /* catch() { ... } // from try @ 0341de1c with catch @ 0341e090
                       catch() { ... } // from try @ 0341e074 with catch @ 0341e090 */
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* catch() { ... } // from try @ 0341e05c with catch @ 0341e094 */
                    /* catch() { ... } // from try @ 0341dd7c with catch @ 0341e098 */
                    /* catch() { ... } // from try @ 0341dd60 with catch @ 0341e09c */
                    /* catch() { ... } // from try @ 0341df44 with catch @ 0341e0a0
                       catch() { ... } // from try @ 0341e06c with catch @ 0341e0a0 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_6564/*"Forward"*/,3,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                    /* catch() { ... } // from try @ 0341dfa8 with catch @ 0341e0ac
                       catch() { ... } // from try @ 0341e064 with catch @ 0341e0ac */
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                    /* catch() { ... } // from try @ 0341dee0 with catch @ 0341e0b8
                       catch() { ... } // from try @ 0341e07c with catch @ 0341e0b8 */
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* catch() { ... } // from try @ 0341de8c with catch @ 0341e0bc */
                    /* catch() { ... } // from try @ 0341de9c with catch @ 0341e0c0 */
                    /* catch() { ... } // from try @ 0341de74 with catch @ 0341e0c4 */
                    /* catch() { ... } // from try @ 0341de80 with catch @ 0341e0c8 */
                    /* catch() { ... } // from try @ 0341de50 with catch @ 0341e0cc */
                    /* catch() { ... } // from try @ 0341de5c with catch @ 0341e0d0 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_5474/*"Down-Forward"*/,4,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e0ec to 0351e0ef has its CatchHandler @ 0341e164 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_5472/*"Down"*/,5,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_5473/*"Down-Back"*/,6,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                    /* try { // try from 0341e130 to 0351e163 has its CatchHandler @ 0341e34c */
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_3359/*"Back"*/,7,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* catch() { ... } // from try @ 0341e0ec with catch @ 0341e164
                       try { // try from 0341e164 to 0351e197 has its CatchHandler @ 0341dcb4 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_14571/*"Up-Back"*/,8,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                    /* catch() { ... } // from try @ 0341e050 with catch @ 0341e174 */
                    /* catch() { ... } // from try @ 0341ddf8 with catch @ 0341e178 */
                    /* catch() { ... } // from try @ 0341ddcc with catch @ 0341e17c */
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e198 to 0351e19b has its CatchHandler @ 0341e33c */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_10576/*"Punch"*/,9,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_8270/*"Kick"*/,10,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e1d8 to 0351e1ff has its CatchHandler @ 0341e34c */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_11017/*"Ranged"*/,0xb,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e200 to 0351e217 has its CatchHandler @ 0341dcb4 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_8772/*"Magic"*/,0xc,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                    /* try { // try from 0341e218 to 0351e21b has its CatchHandler @ 0341e2b8 */
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_10806/*"RaidCharge"*/,0xd,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar2 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           HHGGEFNDOCL;
                                                  if (pSVar2 != (
                                                  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o
                                                  *)0x0) {
                    /* try { // try from 0341e258 to 0351e27f has its CatchHandler @ 0341e34c */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar2,StringLiteral_12531/*"Super"*/,0xe,
                                                  Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Add__
                                                  );
                                                  pSVar4 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           LLHKIPGGPKG;
                                                  if (pSVar4 != (
                                                  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o
                                                  *)0x0) {
                    /* try { // try from 0341e280 to 0351e297 has its CatchHandler @ 0341dcb4 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar4,StringLiteral_9548/*"Nodes"*/,1,
                                                  Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                                                  );
                    /* try { // try from 0341e298 to 0351e29b has its CatchHandler @ 0341e2c8 */
                                                  pSVar4 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           LLHKIPGGPKG;
                    /* try { // try from 0341e2a0 to 0351e327 has its CatchHandler @ 0341e34c */
                                                  if (pSVar4 != (
                                                  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o
                                                  *)0x0) {
                    /* catch() { ... } // from try @ 0341e218 with catch @ 0341e2b8 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar4,StringLiteral_10276/*"Pivot"*/,2,
                                                  Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                                                  );
                                                  pSVar4 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           LLHKIPGGPKG;
                    /* catch() { ... } // from try @ 0341e298 with catch @ 0341e2c8 */
                                                  if (pSVar4 != (
                                                  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar4,StringLiteral_14851/*"Wall"*/,3,
                                                  Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                                                  );
                                                  pSVar4 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           LLHKIPGGPKG;
                                                  if (pSVar4 != (
                                                  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o
                                                  *)0x0) {
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar4,StringLiteral_6500/*"Floor"*/,4,
                                                  Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                                                  );
                                                  pSVar4 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           LLHKIPGGPKG;
                                                  if (pSVar4 != (
                                                  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o
                                                  *)0x0) {
                    /* try { // try from 0341e328 to 0351e333 has its CatchHandler @ 0341dcb4 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar4,StringLiteral_8826/*"MapCenter"*/,5,
                                                  Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                                                  );
                    /* try { // try from 0341e334 to 0351e33b has its CatchHandler @ 0341e34c */
                    /* catch() { ... } // from try @ 0341e198 with catch @ 0341e33c */
                                                  pSVar4 = CMCJGLAABFO_TypeInfo->static_fields->
                                                           LLHKIPGGPKG;
                                                  if (pSVar4 != (
                                                  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o
                                                  *)0x0) {
                    /* catch() { ... } // from try @ 0341e130 with catch @ 0341e34c
                       catch() { ... } // from try @ 0341e1d8 with catch @ 0341e34c
                       catch() { ... } // from try @ 0341e258 with catch @ 0341e34c
                       catch() { ... } // from try @ 0341e2a0 with catch @ 0341e34c
                       catch() { ... } // from try @ 0341e334 with catch @ 0341e34c */
                    /* try { // try from 0341e350 to 0351e46f has its CatchHandler @ 0341e350
                       catch() { ... } // from try @ 0341e350 with catch @ 0341e350
                       catch() { ... } // from try @ 0341e4dc with catch @ 0341e350
                       catch() { ... } // from try @ 0341e614 with catch @ 0341e350
                       catch() { ... } // from try @ 0341e6a0 with catch @ 0341e350
                       catch() { ... } // from try @ 0341e6c0 with catch @ 0341e350
                       catch() { ... } // from try @ 0341e770 with catch @ 0341e350
                       catch() { ... } // from try @ 0341e81c with catch @ 0341e350
                       catch() { ... } // from try @ 0341e858 with catch @ 0341e350
                       catch() { ... } // from try @ 0341e898 with catch @ 0341e350 */
                                                                                                        
                                                  System_Collections_Generic_Dictionary<object,_Int32Enum>__Add
                                                            ((
                                                  System_Collections_Generic_Dictionary_TKey__TValue__o
                                                  *)pSVar4,StringLiteral_3696/*"COM"*/,6,
                                                  Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Add__
                                                  );
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IENLNOEDCFF.ACAJADECPLB EOGEJOBHJMC(string CJNHFNHJHPE)  [RVA 0x331E374]
// CMCJGLAABFO$$EOGEJOBHJMC @ RVA 0x331E374

int32_t CMCJGLAABFO__EOGEJOBHJMC(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *pSVar3;
  
  if ((DAT_0456782a & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_get_Item__
                );
    DAT_0456782a = 1;
  }
  pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (Il2CppObject *)CJNHFNHJHPE,
                       Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_ContainsKey__
                      );
    if (!bVar1) {
      return 0;
    }
    pSVar3 = CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<object,_Int32Enum>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)CJNHFNHJHPE,
                         Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_get_Item__
                        );
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

