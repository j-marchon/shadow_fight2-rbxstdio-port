// NGFEKJBMGEB$$OPFMHDIBOKE @ RVA 0x3119B54

void NGFEKJBMGEB__OPFMHDIBOKE
               (DBNEEHGBCJD_o *NFDKMBAGHPD,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  Il2CppObject *__this;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  long lVar2;
  System_String_o *HPOCBHFNCKD;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  KAKGABBLHGP_o *__this_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ulong uVar5;
  int *piVar6;
  Il2CppObject *pIVar7;
  long *plVar8;
  void **ppvVar9;
  DBNEEHGBCJD_o *NFDKMBAGHPD_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
                    /* catch() { ... } // from try @ 03219b2c with catch @ 03219b58 */
                    /* try { // try from 03219b60 to 03319b67 has its CatchHandler @ 03219b7c */
                    /* try { // try from 03219b68 to 03319b73 has its CatchHandler @ 03219910 */
                    /* try { // try from 03219b74 to 03319b7b has its CatchHandler @ 03219b7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03219b60 with catch @ 03219b7c
                       catch(type#2 @ 00000000) { ... } // from try @ 03219b74 with catch @ 03219b7c
                        */
  if ((DAT_045665db & 1) == 0) {
    FUN_01bab630(&Method_NGFEKJBMGEB_AECFCOMCIAC_EDHNBHLKDDM__);
    FUN_01bab630(&NGFEKJBMGEB_AECFCOMCIAC_TypeInfo);
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PackType___TypeInfo);
    DAT_045665db = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NGFEKJBMGEB_AECFCOMCIAC_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    ppvVar9 = &__this[1].monitor;
    *ppvVar9 = NFDKMBAGHPD;
    thunk_FUN_01c20e04(ppvVar9,NFDKMBAGHPD);
    __this[2].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(__this + 2,BLMFLPJJMPF);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      pIVar7 = __this + 1;
      pIVar7->klass = (Il2CppClass *)(pNVar1->fields).QuestParameters;
      thunk_FUN_01c20e04(pIVar7);
      if (pIVar7->klass != (Il2CppClass *)0x0) {
        *(void **)&(pIVar7->klass->_1).this_arg.bits = __this[1].monitor;
        thunk_FUN_01c20e04();
        auVar10._8_8_ = extraout_x1;
        auVar10._0_8_ = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20)
        ;
        if ((*(byte *)(*(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20)
                      + 0x135) & 1) == 0) {
          auVar10 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(auVar10._0_8_ + 0xc0) + 0x10);
        auVar11._8_8_ = auVar10._8_8_;
        auVar11._0_8_ = lVar2;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          auVar11 = FUN_01b81620();
        }
        method_00 = auVar11._8_8_;
        NFDKMBAGHPD_00 = *ppvVar9;
        plVar8 = (long *)**(undefined8 **)(auVar11._0_8_ + 0xb8);
        if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        HPOCBHFNCKD = NGFEKJBMGEB__CDBGAPKFOMB(NFDKMBAGHPD_00,method_00);
        LFADLKGPBHC = (Core_Configs_Models_PackType_array *)
                      FUN_01bab718(Core_Configs_Models_PackType___TypeInfo,1);
        if (LFADLKGPBHC != (Core_Configs_Models_PackType_array *)0x0) {
          if ((int)LFADLKGPBHC->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
                    /* try { // try from 03219ce8 to 03319e23 has its CatchHandler @ 03219ce8
                       catch() { ... } // from try @ 03219ce8 with catch @ 03219ce8
                       catch() { ... } // from try @ 03219fec with catch @ 03219ce8
                       catch() { ... } // from try @ 0321a030 with catch @ 03219ce8
                       catch() { ... } // from try @ 0321a094 with catch @ 03219ce8
                       catch() { ... } // from try @ 0321a0d4 with catch @ 03219ce8 */
          LFADLKGPBHC->m_Items[0] = 3;
          __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
          KAKGABBLHGP___ctor(__this_00,false,HPOCBHFNCKD,LFADLKGPBHC,(MethodInfo *)0x0);
          uVar3 = thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
          System_Action<object>___ctor();
          if (plVar8 != (long *)0x0) {
            lVar2 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_03219d94;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar8,JNDFOKIMHPB_TypeInfo,0);
LAB_03219d94:
                    /* WARNING: Could not recover jumptable at 0x03219db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar4)(plVar8,__this_00,uVar3,puVar4[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

