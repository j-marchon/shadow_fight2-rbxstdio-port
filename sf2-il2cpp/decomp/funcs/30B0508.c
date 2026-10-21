// CFEANGJDHEE$$OLCAINJPFNH @ RVA 0x30B0508

void CFEANGJDHEE__OLCAINJPFNH
               (System_String_o *NIPCCKMNCGF,System_String_o *GNLGLGHFLDD,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Color32_Fields __this;
  UnityEngine_Color32_o UVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar7;
  System_Enum_o local_60;
  int32_t local_50;
  float local_48;
  int32_t local_44;
  
  if ((DAT_045661d9 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* try { // try from 031b0548 to 032b0607 has its CatchHandler @ 031b0548
                       catch() { ... } // from try @ 031b0548 with catch @ 031b0548
                       catch() { ... } // from try @ 031b080c with catch @ 031b0548
                       catch() { ... } // from try @ 031b0864 with catch @ 031b0548
                       catch() { ... } // from try @ 031b0900 with catch @ 031b0548 */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_LogType_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_11628);
    FUN_01bab630(&StringLiteral_129);
    DAT_045661d9 = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (CFEANGJDHEE_TypeInfo->static_fields->MEIPIGNEPHF).fields;
  if (__this != (UnityEngine_Color32_Fields)0x0) {
    bVar1 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this,ACCIHBHMFPN,
                       Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    if (!bVar1) {
      return;
    }
    pMVar7 = extraout_x1;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar7 = extraout_x1_00;
    }
    UVar2 = CFEANGJDHEE__MLILINDNABO(ACCIHBHMFPN,pMVar7);
                    /* try { // try from 031b0608 to 032b062f has its CatchHandler @ 031b082c */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
    local_44 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if (args != (System_Object_array *)0x0) {
                    /* try { // try from 031b0648 to 032b066b has its CatchHandler @ 031b0820 */
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_031b07fc:
                    /* try { // try from 031b07fc to 032b07ff has its CatchHandler @ 031b0834 */
        uVar6 = thunk_FUN_01be8e1c();
                    /* try { // try from 031b0800 to 032b0803 has its CatchHandler @ 031b0818 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b0804 to 032b0807 has its CatchHandler @ 031b0810 */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar3;
                    /* try { // try from 031b066c to 032b0673 has its CatchHandler @ 031b0814 */
        thunk_FUN_01c20e04(args->m_Items,pIVar3);
        local_48 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
                    /* try { // try from 031b067c to 032b0687 has its CatchHandler @ 031b080c */
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_48);
                    /* try { // try from 031b0698 to 032b06c3 has its CatchHandler @ 031b081c */
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        goto LAB_031b07fc;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar3;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar3);
                    /* try { // try from 031b06d0 to 032b0757 has its CatchHandler @ 031b0830 */
          local_60.klass = (System_Enum_c *)UnityEngine_LogType_TypeInfo;
          local_60.monitor = (void *)0xffffffffffffffff;
          local_50 = ACCIHBHMFPN;
          pSVar5 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_031b07f4;
          pSVar5 = System_String__ToUpper(pSVar5,(MethodInfo *)0x0);
          if ((pSVar5 != (System_String_o *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) goto LAB_031b07fc;
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = (Il2CppObject *)pSVar5;
            thunk_FUN_01c20e04(args->m_Items + 2,pSVar5);
            if ((NIPCCKMNCGF != (System_String_o *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(NIPCCKMNCGF,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_031b07fc;
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = (Il2CppObject *)NIPCCKMNCGF;
                    /* try { // try from 031b0760 to 032b0767 has its CatchHandler @ 031b0824 */
              thunk_FUN_01c20e04(args->m_Items + 3,NIPCCKMNCGF);
              pMVar7 = (MethodInfo *)0x0;
              pSVar5 = System_String__Format(StringLiteral_129,args,(MethodInfo *)0x0);
              CFEANGJDHEE__DHAAGKPHJLA
                        (pSVar5,(UnityEngine_Color32_o)(UVar2.fields & 0xffffffffU),pMVar7);
              if (ACCIHBHMFPN == 4) {
                if (GNLGLGHFLDD == (System_String_o *)0x0) goto LAB_031b07f4;
                if (0x28 < (GNLGLGHFLDD->fields)._stringLength) {
                    /* try { // try from 031b07a8 to 032b07df has its CatchHandler @ 031b0834 */
                  pMVar7 = (MethodInfo *)0x0;
                  pSVar5 = System_String__Concat(StringLiteral_11628,GNLGLGHFLDD,(MethodInfo *)0x0);
                  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
                  }
                  CFEANGJDHEE__DHAAGKPHJLA
                            (pSVar5,(UnityEngine_Color32_o)(UVar2.fields & 0xffffffffU),pMVar7);
                }
              }
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031b07f8 to 032b07fb has its CatchHandler @ 031b0828 */
      FUN_01bab8d0();
    }
  }
LAB_031b07f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

