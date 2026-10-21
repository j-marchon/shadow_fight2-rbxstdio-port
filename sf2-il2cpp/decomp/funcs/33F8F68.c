// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$DILNCPJMEGA @ RVA 0x33F8F68

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__DILNCPJMEGA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  GCIFMNHADDF_o *__this_00;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  OJEHKJHEBID_o *pOVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04567fa4 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17756);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17773);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567fa4 = 1;
  }
  bVar3 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if ((bVar3) && ((__this->fields).EDMGOFMIPEG == false)) {
    return;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    JJPNLEPEAFM__DDOCEEFBIGC((Il2CppObject *)0x0,(MethodInfo *)0x0);
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    pOVar7 = (__this->fields).FBILHKCKHEJ;
    if ((pOVar7 != (OJEHKJHEBID_o *)0x0) && (lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar5 + 0x20) = (pOVar7->fields).GJNOEAKNMOG;
      thunk_FUN_01c20e04();
      uVar2 = StringLiteral_17773;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar8 = pIVar4->klass;
        uVar1._0_1_ = (pIVar8->_2).rank;
        uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
              goto LAB_034f90f4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034f90f4:
        EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
        JJPNLEPEAFM__JNDPLPKDPCP
                  (StringLiteral_17756,EHNFGMGKCHO,StringLiteral_9679,StringLiteral_1,
                   (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,false,true,true,
                   true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

