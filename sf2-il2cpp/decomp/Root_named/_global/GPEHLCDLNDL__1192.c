// TypeDefIndex 1192
// Namespace: 
// public static class GPEHLCDLNDL
// Fields:
//   public const char HBLBHGJNNJF = '\x2e';
//   private static List<TutorialNode> JFNDMOBADAG; // 0x0

// ===== public static void LNENELMPIOG(TutorialNode JHMENEKPIBO)  [RVA 0x3127E48]
// GPEHLCDLNDL$$LNENELMPIOG @ RVA 0x3127E48

void GPEHLCDLNDL__LNENELMPIOG(Nekki_SF2_GUI_Tutorial_TutorialNode_o *JHMENEKPIBO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_TutorialNode__o *__this;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Tutorial_TutorialNode_array *pNVar3;
  
  if ((DAT_0456666c & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
                    /* try { // try from 03227e7c to 03327e8b has its CatchHandler @ 03227ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Add__);
    DAT_0456666c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03227e8c to 03327ea7 has its CatchHandler @ 03227f0c */
  if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03227d20 with catch @ 03227e94 */
    thunk_FUN_01ba7564(GPEHLCDLNDL_TypeInfo,method);
  }
  lVar2 = Method_System_Collections_Generic_List<TutorialNode>_Add__;
                    /* catch() { ... } // from try @ 03227d5c with catch @ 03227ea0
                       catch() { ... } // from try @ 03227e7c with catch @ 03227ea0 */
  __this = GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG;
  if (__this != (System_Collections_Generic_List_TutorialNode__o *)0x0) {
                    /* try { // try from 03227ea8 to 03327ecf has its CatchHandler @ 03226e68 */
                    /* catch() { ... } // from try @ 0322709c with catch @ 03227eb0 */
                    /* catch() { ... } // from try @ 0322708c with catch @ 03227eb4 */
    pNVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_GUI_Tutorial_TutorialNode_array *)0x0) {
      uVar1 = (__this->fields)._size;
                    /* try { // try from 03227ed0 to 03327ed3 has its CatchHandler @ 03227f00 */
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
                    /* try { // try from 03227ee4 to 03327eff has its CatchHandler @ 03227f0c */
        pNVar3->m_Items[(int)uVar1] = JHMENEKPIBO;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,JHMENEKPIBO);
        return;
      }
                    /* catch() { ... } // from try @ 03227ed0 with catch @ 03227f00 */
                    /* catch() { ... } // from try @ 03227d3c with catch @ 03227f0c
                       catch() { ... } // from try @ 03227e8c with catch @ 03227f0c
                       catch() { ... } // from try @ 03227ee4 with catch @ 03227f0c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)JHMENEKPIBO,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static TutorialNode IFFHCBKGMKC(string EIJDDKJONFO)  [RVA 0x3127F1C]
// GPEHLCDLNDL$$IFFHCBKGMKC @ RVA 0x3127F1C

/* WARNING: Type propagation algorithm not settling */

Nekki_SF2_GUI_Tutorial_TutorialNode_o *
GPEHLCDLNDL__IFFHCBKGMKC(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_array *pSVar3;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this;
  MethodInfo *extraout_x1;
  char *pcVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  long lVar6;
  
  if ((DAT_0456666d & 1) == 0) {
    FUN_01bab630(&Method_GPEHLCDLNDL_AKEOOKGDJDM_CFABNCIJNCM__);
    FUN_01bab630(&GPEHLCDLNDL_AKEOOKGDJDM_TypeInfo);
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Find__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<TutorialNode>_TypeInfo);
    DAT_0456666d = 1;
    method = extraout_x1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(GPEHLCDLNDL_AKEOOKGDJDM_TypeInfo,method);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if ((EIJDDKJONFO != (System_String_o *)0x0) &&
     (pSVar3 = System_String__Split(EIJDDKJONFO,0x2e,0,(MethodInfo *)0x0),
     pIVar2 != (Il2CppObject *)0x0)) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)pSVar3;
    thunk_FUN_01c20e04(pIVar2,pSVar3);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      if ((pIVar2->klass->_1).namespaze == (char *)0x0) {
        return (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
      }
      if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<TutorialNode>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_TutorialNode__o *)0x0) {
        __this = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)
                 System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_00,match,
                            Method_System_Collections_Generic_List<TutorialNode>_Find__);
        if (pIVar2->klass != (Il2CppClass *)0x0) {
          pcVar4 = (pIVar2->klass->_1).namespaze;
          if ((int)pcVar4 < 2) {
            return __this;
          }
          lVar6 = 0;
          while( true ) {
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              return (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
            }
            pIVar5 = pIVar2->klass;
            if (pIVar5 == (Il2CppClass *)0x0) break;
            if ((ulong)*(uint *)&(pIVar5->_1).namespaze <= lVar6 + 1U) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            if (__this == (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) break;
            __this = Nekki_SF2_GUI_Tutorial_TutorialNode__GetNode
                               (__this,*(System_String_o **)
                                        (&(pIVar5->_1).byval_arg.bits + lVar6 * 2),(MethodInfo *)0x0
                               );
            lVar6 = lVar6 + 1;
            if (((ulong)pcVar4 & 0xffffffff) - 1 == lVar6) {
              return __this;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OHJINPLLLIM(TutorialNode JHMENEKPIBO)  [RVA 0x312810C]
// GPEHLCDLNDL$$OHJINPLLLIM @ RVA 0x312810C

void GPEHLCDLNDL__OHJINPLLLIM(Nekki_SF2_GUI_Tutorial_TutorialNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Collections_Generic_List_TutorialNode__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456666e & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Remove__);
    DAT_0456666e = 1;
    method = extraout_x1;
  }
  if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GPEHLCDLNDL_TypeInfo,method);
  }
  __this = GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG;
  if (__this != (System_Collections_Generic_List_TutorialNode__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)JHMENEKPIBO,
               Method_System_Collections_Generic_List<TutorialNode>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x312818C]
// GPEHLCDLNDL$$.cctor @ RVA 0x312818C

void GPEHLCDLNDL___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_TutorialNode__o *__this;
  
  if ((DAT_0456666f & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TutorialNode>_TypeInfo);
    DAT_0456666f = 1;
  }
  __this = (System_Collections_Generic_List_TutorialNode__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<TutorialNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<TutorialNode>__ctor__);
  GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG = __this;
  thunk_FUN_01c20e04(GPEHLCDLNDL_TypeInfo->static_fields,__this);
  return;
}

