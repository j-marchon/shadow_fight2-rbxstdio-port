// TypeDefIndex 3086
// Namespace: 
// public class EINKKMIHCHI : NHJCFGACFDF
// Fields:
//   private readonly PlayGamesPlatform GJOCPBIBFCD; // 0x18
//   private readonly GPFMGALHFJK KAKIHIMNDAE; // 0x20
//   private readonly HashSet<string> LKNFEOLNJKH; // 0x28
//   private readonly HashSet<string> FEKDPAPKONP; // 0x30

// ===== public override void KNLFICNFHBE()  [RVA 0x34C6258]
// EINKKMIHCHI$$KNLFICNFHBE @ RVA 0x34C6258

void EINKKMIHCHI__KNLFICNFHBE(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  ulong uVar1;
  System_Action_HDBCDLKEHLD_NFNCDDAFPIM__o *BLMFLPJJMPF;
  MethodInfo *in_x2;
  GPFMGALHFJK_o *EMIJCAIFDML;
  
  if ((DAT_0456863a & 1) == 0) {
    FUN_01bab630(&System_Action<HDBCDLKEHLD_NFNCDDAFPIM>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_BIMICOKMKDD__);
    DAT_0456863a = 1;
  }
  uVar1 = (*(__this->klass->vtable)._21_HCDIBNJMKLH.methodPtr)
                    (__this,(__this->klass->vtable)._21_HCDIBNJMKLH.method);
  if ((uVar1 & 1) != 0) {
    EINKKMIHCHI__IEIIOHNJOAL(__this,true,in_x2);
    return;
  }
  EMIJCAIFDML = (__this->fields).KAKIHIMNDAE;
  BLMFLPJJMPF = (System_Action_HDBCDLKEHLD_NFNCDDAFPIM__o *)
                thunk_FUN_01bda818(System_Action<HDBCDLKEHLD_NFNCDDAFPIM>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  BDDPEOBACJK__IMOEMLPDGNB((CMJMJFJOCMO_o *)EMIJCAIFDML,BLMFLPJJMPF,false,(MethodInfo *)0x0);
  return;
}


// ===== public override void HEHBOCDCKEN()  [RVA 0x34C63D0]
// EINKKMIHCHI$$HEHBOCDCKEN @ RVA 0x34C63D0

void EINKKMIHCHI__HEHBOCDCKEN(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  GooglePlayGames_PlayGamesPlatform_o *pGVar5;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  VirtualInvokeData *pVVar9;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar10;
  undefined8 *puVar11;
  int32_t *piVar12;
  
  if ((DAT_0456863b & 1) == 0) {
    FUN_01bab630(&System_Action<SelectUIStatus,_ISavedGameMetadata>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_BHBIGEDOOKD__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&StringLiteral_11788/*"Select saved game to load"*/);
    FUN_01bab630(&StringLiteral_4443/*"Cloud save games disabled"*/);
    FUN_01bab630(&StringLiteral_5883/*"Error not signed in"*/);
    FUN_01bab630(&StringLiteral_8575/*"Loading dump from the cloud"*/);
    DAT_0456863b = 1;
  }
  uVar4 = (*(__this->klass->vtable)._21_HCDIBNJMKLH.methodPtr)
                    (__this,(__this->klass->vtable)._21_HCDIBNJMKLH.method);
  if ((uVar4 & 1) != 0) {
    pGVar5 = (__this->fields).GJOCPBIBFCD;
    if (pGVar5 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
      pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(pGVar5,(MethodInfo *)0x0);
      if (pGVar6 == (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
        puVar11 = &StringLiteral_4443/*"Cloud save games disabled"*/;
        goto LAB_035c658c;
      }
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_8575/*"Loading dump from the cloud"*/,(MethodInfo *)0x0);
      pGVar5 = (__this->fields).GJOCPBIBFCD;
      if (pGVar5 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
        pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(pGVar5,(MethodInfo *)0x0);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
        }
        pIVar7 = IFAMAAGNCBJ__GPBMELHDADN<object>
                           (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
        if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[10].klass != (Il2CppClass *)0x0)) {
          uVar1 = *(uint *)&((pIVar7[10].klass)->_1).name;
          uVar8 = thunk_FUN_01bda818(System_Action<SelectUIStatus,_ISavedGameMetadata>_TypeInfo);
          System_Action<Int32Enum,_object>___ctor();
          uVar3 = StringLiteral_11788/*"Select saved game to load"*/;
          if (pGVar6 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
            pGVar10 = pGVar6->klass;
            uVar2._0_1_ = (pGVar10->_2).rank;
            uVar2._1_1_ = (pGVar10->_2).minimumAlignment;
            uVar4 = (ulong)uVar2;
            if (uVar4 != 0) {
              piVar12 = &((pGVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                  pVVar9 = pGVar10->vtable + (*piVar12 + 3);
                  goto LAB_035c65b8;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            pVVar9 = (VirtualInvokeData *)
                     FUN_01b81914(pGVar6,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,3);
LAB_035c65b8:
                    /* WARNING: Could not recover jumptable at 0x035c65e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar9->methodPtr)(pGVar6,uVar3,(ulong)uVar1,0,0,uVar8,pVVar9->method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  puVar11 = &StringLiteral_5883/*"Error not signed in"*/;
LAB_035c658c:
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,(System_String_o *)*puVar11,(MethodInfo *)0x0);
  return;
}


// ===== private void IEIIOHNJOAL(bool LNGMMFHGAOC)  [RVA 0x34C6308]
// EINKKMIHCHI$$IEIIOHNJOAL @ RVA 0x34C6308

void EINKKMIHCHI__IEIIOHNJOAL(EINKKMIHCHI_o *__this,bool LNGMMFHGAOC,MethodInfo *method)

{
  System_String_o *pSVar1;
  GPFMGALHFJK_o *pGVar2;
  
  if ((DAT_0456863c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_3646/*"CB_AuthenticateAndShowAchievementsUI, authed = "*/);
    DAT_0456863c = 1;
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_3646/*"CB_AuthenticateAndShowAchievementsUI, authed = "*/,pSVar1,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
  if (LNGMMFHGAOC) {
    pGVar2 = (__this->fields).KAKIHIMNDAE;
    if (pGVar2 == (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pGVar2->klass->vtable)._43_DJJDKCIDCDJ.methodPtr)
              (pGVar2,(pGVar2->klass->vtable)._43_DJJDKCIDCDJ.method);
  }
  return;
}


// ===== public override int KFHNHPGBJBH()  [RVA 0x34C65E8]
// EINKKMIHCHI$$KFHNHPGBJBH @ RVA 0x34C65E8

int32_t EINKKMIHCHI__KFHNHPGBJBH(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public override string PLPICDIFHHG()  [RVA 0x34C65F0]
// EINKKMIHCHI$$PLPICDIFHHG @ RVA 0x34C65F0

System_String_o * EINKKMIHCHI__PLPICDIFHHG(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  System_String_o *pSVar2;
  
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c660c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pGVar1->klass->vtable)._49_PLPICDIFHHG.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._49_PLPICDIFHHG.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool LFEGGMNMDMJ()  [RVA 0x34C6614]
// EINKKMIHCHI$$LFEGGMNMDMJ @ RVA 0x34C6614

bool EINKKMIHCHI__LFEGGMNMDMJ(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  GPFMGALHFJK_o *pGVar2;
  
  pGVar2 = (__this->fields).KAKIHIMNDAE;
  if (pGVar2 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c6630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pGVar2->klass->vtable)._39_LFEGGMNMDMJ.methodPtr)
                      (pGVar2,(pGVar2->klass->vtable)._39_LFEGGMNMDMJ.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool NHOLBMHOMCM()  [RVA 0x34C6638]
// EINKKMIHCHI$$NHOLBMHOMCM @ RVA 0x34C6638

bool EINKKMIHCHI__NHOLBMHOMCM(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  return false;
}


// ===== private void KILLFKNHDAO(IAchievement[] GHAAKPDHIJJ)  [RVA 0x34C6640]
// EINKKMIHCHI$$KILLFKNHDAO @ RVA 0x34C6640

void EINKKMIHCHI__KILLFKNHDAO
               (EINKKMIHCHI_o *__this,UnityEngine_SocialPlatforms_IAchievement_array *GHAAKPDHIJJ,
               MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  Il2CppMethodPointer *ppIVar6;
  Il2CppObject *pIVar7;
  System_Object_array *IDLMDMNFPHK;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  UnityEngine_SocialPlatforms_IAchievement_c *pUVar11;
  System_Collections_Generic_HashSet_string__o *pSVar12;
  System_Action_IAchievement____o *pSVar13;
  int32_t *piVar14;
  UnityEngine_SocialPlatforms_IAchievement_o *pUVar15;
  ulong uVar16;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_0456863d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&UnityEngine_SocialPlatforms_IAchievement_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_14517/*"Unlocked achievements: {0}/{1}"*/);
    FUN_01bab630(&StringLiteral_3647/*"CB_LoadAchievements"*/);
    DAT_0456863d = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_3647/*"CB_LoadAchievements"*/,(MethodInfo *)0x0);
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
  if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear
              (pSVar5,Method_System_Collections_Generic_HashSet<string>_Clear__);
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear
                (pSVar5,Method_System_Collections_Generic_HashSet<string>_Clear__);
      if ((GHAAKPDHIJJ != (UnityEngine_SocialPlatforms_IAchievement_array *)0x0) &&
         (0 < (int)GHAAKPDHIJJ->max_length)) {
        uVar16 = 0;
        uVar10 = GHAAKPDHIJJ->max_length & 0xffffffff;
        do {
          if (uVar10 <= uVar16) goto LAB_035c69ec;
          pUVar15 = GHAAKPDHIJJ->m_Items[uVar16];
          if (pUVar15 != (UnityEngine_SocialPlatforms_IAchievement_o *)0x0) {
            pUVar11 = pUVar15->klass;
            pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
            uVar2._0_1_ = (pUVar11->_2).rank;
            uVar2._1_1_ = (pUVar11->_2).minimumAlignment;
            uVar10 = (ulong)uVar2;
            if (uVar10 != 0) {
              piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  ppIVar6 = &pUVar11->vtable[*piVar14 + 1].methodPtr;
                  goto LAB_035c67ac;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            ppIVar6 = (Il2CppMethodPointer *)
                      FUN_01b81914(pUVar15,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,1);
LAB_035c67ac:
            pIVar7 = (Il2CppObject *)(**ppIVar6)(pUVar15,(MethodInfo *)ppIVar6[1]);
            if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_035c69e8;
            System_Collections_Generic_HashSet<object>__Add
                      (pSVar5,pIVar7,Method_System_Collections_Generic_HashSet<string>_Add__);
            pUVar11 = pUVar15->klass;
            uVar3._0_1_ = (pUVar11->_2).rank;
            uVar3._1_1_ = (pUVar11->_2).minimumAlignment;
            uVar10 = (ulong)uVar3;
            if (uVar10 != 0) {
              piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  ppIVar6 = &pUVar11->vtable[*piVar14 + 4].methodPtr;
                  goto LAB_035c681c;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            ppIVar6 = (Il2CppMethodPointer *)
                      FUN_01b81914(pUVar15,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,4);
LAB_035c681c:
            uVar10 = (**ppIVar6)(pUVar15,(MethodInfo *)ppIVar6[1]);
            if ((uVar10 & 1) != 0) {
              pUVar11 = pUVar15->klass;
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
              uVar4._0_1_ = (pUVar11->_2).rank;
              uVar4._1_1_ = (pUVar11->_2).minimumAlignment;
              uVar10 = (ulong)uVar4;
              if (uVar10 != 0) {
                piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                      (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                    ppIVar6 = &pUVar11->vtable[*piVar14 + 1].methodPtr;
                    goto LAB_035c6880;
                  }
                  uVar10 = uVar10 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar10 != 0);
              }
              ppIVar6 = (Il2CppMethodPointer *)
                        FUN_01b81914(pUVar15,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,1);
LAB_035c6880:
              pIVar7 = (Il2CppObject *)(**ppIVar6)(pUVar15,(MethodInfo *)ppIVar6[1]);
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_035c69e8;
              System_Collections_Generic_HashSet<object>__Add
                        (pSVar5,pIVar7,Method_System_Collections_Generic_HashSet<string>_Add__);
            }
          }
          uVar1 = (uint)GHAAKPDHIJJ->max_length;
          uVar10 = (ulong)uVar1;
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)uVar1);
      }
      IDLMDMNFPHK = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      pSVar12 = (__this->fields).FEKDPAPKONP;
      if (pSVar12 != (System_Collections_Generic_HashSet_string__o *)0x0) {
        local_44 = (pSVar12->fields)._count;
        pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
        if (IDLMDMNFPHK != (System_Object_array *)0x0) {
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar8 = thunk_FUN_01bda71c(pIVar7,(((IDLMDMNFPHK->obj).klass)->_1).element_class),
             lVar8 == 0)) {
LAB_035c69f0:
            uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar9,0);
          }
          if ((int)IDLMDMNFPHK->max_length == 0) {
LAB_035c69ec:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          IDLMDMNFPHK->m_Items[0] = pIVar7;
          thunk_FUN_01c20e04(IDLMDMNFPHK->m_Items,pIVar7);
          pSVar12 = (__this->fields).LKNFEOLNJKH;
          if (pSVar12 != (System_Collections_Generic_HashSet_string__o *)0x0) {
            local_48 = (pSVar12->fields)._count;
            pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pIVar7,(((IDLMDMNFPHK->obj).klass)->_1).element_class),
               lVar8 == 0)) goto LAB_035c69f0;
            if ((uint)IDLMDMNFPHK->max_length < 2) goto LAB_035c69ec;
            IDLMDMNFPHK->m_Items[1] = pIVar7;
            thunk_FUN_01c20e04(IDLMDMNFPHK->m_Items + 1,pIVar7);
            NHJCFGACFDF__JCPIAHAKBIA
                      ((NHJCFGACFDF_o *)__this,StringLiteral_14517/*"Unlocked achievements: {0}/{1}"*/,IDLMDMNFPHK,(MethodInfo *)0x0);
            if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar13 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
            if (pSVar13 != (System_Action_IAchievement____o *)0x0) {
              (*(code *)(pSVar13->fields).super.super.invoke_impl)
                        ((pSVar13->fields).super.super.method_code,GHAAKPDHIJJ,
                         (pSVar13->fields).super.super.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_035c69e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string BKKOBBDEPFH()  [RVA 0x34C69FC]
// EINKKMIHCHI$$BKKOBBDEPFH @ RVA 0x34C69FC

System_String_o * EINKKMIHCHI__BKKOBBDEPFH(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  System_String_o *pSVar2;
  
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c6a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pGVar1->klass->vtable)._47_BKBHIEIDOKB.methodPtr)
                       (pGVar1,0,(pGVar1->klass->vtable)._47_BKBHIEIDOKB.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BGFEFMHKJLO(string OGPGLGPMEPD, double NMGMBECEPHC)  [RVA 0x34C6A24]
// EINKKMIHCHI$$BGFEFMHKJLO @ RVA 0x34C6A24

void EINKKMIHCHI__BGFEFMHKJLO
               (EINKKMIHCHI_o *__this,System_String_o *OGPGLGPMEPD,double NMGMBECEPHC,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_string__double__o *pSVar2;
  Il2CppMethodPointer local_38;
  
  local_38 = (Il2CppMethodPointer)NMGMBECEPHC;
  if ((DAT_0456863e & 1) == 0) {
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_3642/*"CB_AchievementProgress id = "*/);
    NMGMBECEPHC = (double)FUN_01bab630(&StringLiteral_512/*" progress = "*/);
    DAT_0456863e = 1;
  }
  pSVar1 = System_Double__ToString(NMGMBECEPHC,(MethodInfo *)&stack0xffffffffffffffc8);
  pSVar1 = System_String__Concat
                     (StringLiteral_3642/*"CB_AchievementProgress id = "*/,OGPGLGPMEPD,StringLiteral_512/*" progress = "*/,pSVar1,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NHJCFGACFDF_TypeInfo->static_fields->DDPMFMMJNJF;
  if (pSVar2 != (System_Action_string__double__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              (local_38,(pSVar2->fields).super.super.method_code,OGPGLGPMEPD,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OLGAHLHLCKH()  [RVA 0x34C6B18]
// EINKKMIHCHI$$OLGAHLHLCKH @ RVA 0x34C6B18

void EINKKMIHCHI__OLGAHLHLCKH(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c6b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable)._41_OLGAHLHLCKH.methodPtr)
              (pGVar1,0,(pGVar1->klass->vtable)._41_OLGAHLHLCKH.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHBIGEDOOKD(SelectUIStatus MNPKIDDPNBM, ISavedGameMetadata FFBGEAILDNO)  [RVA 0x34C6B40]
// EINKKMIHCHI$$BHBIGEDOOKD @ RVA 0x34C6B40

void EINKKMIHCHI__BHBIGEDOOKD
               (EINKKMIHCHI_o *__this,int32_t MNPKIDDPNBM,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *FFBGEAILDNO,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_String_o *message;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar6;
  undefined8 uVar7;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_c *pGVar8;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Enum_o local_58;
  int32_t local_48;
  int64_t local_40;
  System_DateTime_Fields local_38;
  
  if ((DAT_0456863f & 1) == 0) {
    FUN_01bab630(&System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_IDCCBIDEPFC_EHMAAPAFAOF__);
    FUN_01bab630(&EINKKMIHCHI_IDCCBIDEPFC_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SelectUIStatus_TypeInfo);
    FUN_01bab630(&StringLiteral_15469/*"[GameCenter_Android]: opening dump file: "*/);
    FUN_01bab630(&StringLiteral_15470/*"[GameCenter_Android]: согласовать с серверными дампами!"*/);
    FUN_01bab630(&StringLiteral_17894/*"dump."*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5928/*"Error selecting save game: "*/);
    DAT_0456863f = 1;
  }
  local_40 = 0;
  local_38._dateData = 0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_IDCCBIDEPFC_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(int32_t *)&__this_00[1].monitor = MNPKIDDPNBM;
    if (MNPKIDDPNBM != 1) {
      local_58.klass = (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SelectUIStatus_TypeInfo;
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = MNPKIDDPNBM;
      pSVar5 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_5928/*"Error selecting save game: "*/,pSVar5,(MethodInfo *)0x0);
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar5,(MethodInfo *)0x0);
      return;
    }
    if (FFBGEAILDNO != (GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *)0x0) {
      pGVar8 = FFBGEAILDNO->klass;
      uVar1._0_1_ = (pGVar8->_2).rank;
      uVar1._1_1_ = (pGVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pGVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
            pVVar4 = pGVar8->vtable + (*piVar11 + 1);
            goto LAB_035c6d0c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(FFBGEAILDNO,
                            GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,1);
LAB_035c6d0c:
      pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(FFBGEAILDNO,pVVar4->method);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
      if (bVar3) {
        if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_15470/*"[GameCenter_Android]: согласовать с серверными дампами!"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_38._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
        local_40 = System_DateTime__ToBinary((System_DateTime_o)&local_38,(MethodInfo *)0x0);
        pSVar5 = System_Int64__ToString((int64_t)&local_40,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(StringLiteral_17894/*"dump."*/,pSVar5,(MethodInfo *)0x0);
      }
      message = System_String__Concat(StringLiteral_15469/*"[GameCenter_Android]: opening dump file: "*/,pSVar5,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      __this_01 = (__this->fields).GJOCPBIBFCD;
      if (__this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
        pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(__this_01,(MethodInfo *)0x0);
        uVar7 = thunk_FUN_01bda818(
                                  System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo
                                  );
        System_Action<Int32Enum,_object>___ctor();
        if (pGVar6 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
          pGVar9 = pGVar6->klass;
          uVar2._0_1_ = (pGVar9->_2).rank;
          uVar2._1_1_ = (pGVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar2;
          if (uVar10 != 0) {
            piVar11 = &((pGVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                pVVar4 = pGVar9->vtable + *piVar11;
                goto LAB_035c6ea0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar4 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar6,GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,
                                0);
LAB_035c6ea0:
          (*pVVar4->methodPtr)(pGVar6,pSVar5,0,0,uVar7,pVVar4->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BIMICOKMKDD(HDBCDLKEHLD.NFNCDDAFPIM KEFILECBPMF)  [RVA 0x34C6EDC]
// EINKKMIHCHI$$BIMICOKMKDD @ RVA 0x34C6EDC

void EINKKMIHCHI__BIMICOKMKDD(EINKKMIHCHI_o *__this,int32_t KEFILECBPMF,MethodInfo *method)

{
  EINKKMIHCHI__IEIIOHNJOAL(__this,KEFILECBPMF == 0,method);
  return;
}


// ===== public override string KCHJCGEMCGE()  [RVA 0x34C6EE8]
// EINKKMIHCHI$$KCHJCGEMCGE @ RVA 0x34C6EE8

System_String_o * EINKKMIHCHI__KCHJCGEMCGE(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  if ((DAT_04568640 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6885/*"GooglePlayGames"*/);
    DAT_04568640 = 1;
  }
  return StringLiteral_6885/*"GooglePlayGames"*/;
}


// ===== public override bool HCDIBNJMKLH()  [RVA 0x34C6F28]
// EINKKMIHCHI$$HCDIBNJMKLH @ RVA 0x34C6F28

bool EINKKMIHCHI__HCDIBNJMKLH(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  GPFMGALHFJK_o *pGVar2;
  
  pGVar2 = (__this->fields).KAKIHIMNDAE;
  if (pGVar2 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c6f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pGVar2->klass->vtable)._31_KKNJKFBJBNI.methodPtr)
                      (pGVar2,(pGVar2->klass->vtable)._31_KKNJKFBJBNI.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ADBBGOBBAJA()  [RVA 0x34C6F4C]
// EINKKMIHCHI$$ADBBGOBBAJA @ RVA 0x34C6F4C

System_String_o * EINKKMIHCHI__ADBBGOBBAJA(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568641 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04568641 = 1;
    method = extraout_x1;
  }
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(pGVar1->klass->vtable)._48_IKGOHPFGLKD.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._48_IKGOHPFGLKD.method);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = string_TypeInfo->static_fields->Empty;
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor(GPFMGALHFJK EMIJCAIFDML)  [RVA 0x34C6FB8]
// EINKKMIHCHI$$.ctor @ RVA 0x34C6FB8

void EINKKMIHCHI___ctor(EINKKMIHCHI_o *__this,GPFMGALHFJK_o *EMIJCAIFDML,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_string__o **ppSVar2;
  GooglePlayGames_PlayGamesPlatform_o *pGVar3;
  GPFMGALHFJK_o **ppGVar4;
  
  if ((DAT_04568642 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04568642 = 1;
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar2 = &(__this->fields).LKNFEOLNJKH;
  *ppSVar2 = (System_Collections_Generic_HashSet_string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar2 = &(__this->fields).FEKDPAPKONP;
  *ppSVar2 = (System_Collections_Generic_HashSet_string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NHJCFGACFDF___ctor((NHJCFGACFDF_o *)__this,(MethodInfo *)0x0);
  pGVar3 = GooglePlayGames_PlayGamesPlatform__get_Instance((MethodInfo *)0x0);
  (__this->fields).GJOCPBIBFCD = pGVar3;
  thunk_FUN_01c20e04();
  ppGVar4 = &(__this->fields).KAKIHIMNDAE;
  *ppGVar4 = EMIJCAIFDML;
  thunk_FUN_01c20e04(ppGVar4,EMIJCAIFDML);
  return;
}


// ===== public override void GIENGNEGHPJ()  [RVA 0x34C70BC]
// EINKKMIHCHI$$GIENGNEGHPJ @ RVA 0x34C70BC

void EINKKMIHCHI__GIENGNEGHPJ(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  if ((DAT_04568643 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7514/*"Init"*/);
    DAT_04568643 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_7514/*"Init"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override void CLKGKNCGJID(string KKJPPDNKGAI, int HFELHFCLPJE, int PKEAOHMFMFD, bool HLJOHNIDBDM = True)  [RVA 0x34C7108]
// EINKKMIHCHI$$CLKGKNCGJID @ RVA 0x34C7108

void EINKKMIHCHI__CLKGKNCGJID
               (EINKKMIHCHI_o *__this,System_String_o *KKJPPDNKGAI,int32_t HFELHFCLPJE,
               int32_t PKEAOHMFMFD,bool HLJOHNIDBDM,MethodInfo *method)

{
  int32_t steps;
  bool bVar1;
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Action_bool__o *callback;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  void **ppvVar5;
  
  if ((DAT_04568644 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo,KKJPPDNKGAI,HFELHFCLPJE,PKEAOHMFMFD);
    FUN_01bab630(&Method_EINKKMIHCHI_EDKNECAGMNM_IEBHMFJJMHK__);
    FUN_01bab630(&EINKKMIHCHI_EDKNECAGMNM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&StringLiteral_15417/*"[AchievementProgress] Error - Achievement null! Id: "*/);
    FUN_01bab630(&StringLiteral_15416/*"[AchievementProgress] Error - Achievement already unlocked! Id: "*/);
    DAT_04568644 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_EDKNECAGMNM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar5 = &__this_00[1].monitor;
    *ppvVar5 = KKJPPDNKGAI;
    thunk_FUN_01c20e04(ppvVar5,KKJPPDNKGAI);
    *(int32_t *)&__this_00[2].klass = HFELHFCLPJE;
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar2,*ppvVar5,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      if (!bVar1) {
        pSVar3 = *ppvVar5;
        puVar4 = &StringLiteral_15417/*"[AchievementProgress] Error - Achievement null! Id: "*/;
LAB_035c7224:
        pSVar3 = System_String__Concat((System_String_o *)*puVar4,pSVar3,(MethodInfo *)0x0);
        NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar3,(MethodInfo *)0x0);
        return;
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar1 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar2,*ppvVar5,
                           Method_System_Collections_Generic_HashSet<string>_Contains__);
        if (bVar1) {
          if (!HLJOHNIDBDM) {
            return;
          }
          pSVar3 = *ppvVar5;
          puVar4 = &StringLiteral_15416/*"[AchievementProgress] Error - Achievement already unlocked! Id: "*/;
          goto LAB_035c7224;
        }
        __this_01 = (__this->fields).GJOCPBIBFCD;
        pSVar3 = __this_00[1].monitor;
        steps = *(int32_t *)&__this_00[2].klass;
        callback = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
        System_Action<bool>___ctor();
        if (__this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
          GooglePlayGames_PlayGamesPlatform__SetStepsAtLeast
                    (__this_01,pSVar3,steps,callback,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHNMAENAOIF(SavedGameRequestStatus MNPKIDDPNBM, ISavedGameMetadata NDLNFCBLAPK)  [RVA 0x34C72D4]
// EINKKMIHCHI$$LHNMAENAOIF @ RVA 0x34C72D4

void EINKKMIHCHI__LHNMAENAOIF
               (EINKKMIHCHI_o *__this,int32_t MNPKIDDPNBM,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *NDLNFCBLAPK,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  Nekki_Utils_GlobalTimer_o *__this_00;
  System_DateTime_o DHCOILBOGHE;
  Il2CppObject *arg0;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_c *pGVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Action_string__o *pSVar8;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568645 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo);
    FUN_01bab630(&StringLiteral_5497/*"Dump "*/);
    FUN_01bab630(&StringLiteral_513/*" pushed"*/);
    FUN_01bab630(&StringLiteral_22271/*"{0:HH:mm MMM dd yyyy}"*/);
    FUN_01bab630(&StringLiteral_5927/*"Error saving dump: "*/);
    DAT_04568645 = 1;
  }
  if (MNPKIDDPNBM != 1) {
    local_48.klass =
         (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = MNPKIDDPNBM;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_5927/*"Error saving dump: "*/,pSVar4,(MethodInfo *)0x0);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar4,(MethodInfo *)0x0);
    return;
  }
  if (NDLNFCBLAPK != (GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *)0x0) {
    pGVar5 = NDLNFCBLAPK->klass;
    uVar1._0_1_ = (pGVar5->_2).rank;
    uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pGVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
          pVVar3 = pGVar5->vtable + (*piVar7 + 2);
          goto LAB_035c7428;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(NDLNFCBLAPK,GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo
                          ,2);
LAB_035c7428:
    pSVar4 = (System_String_o *)(*pVVar3->methodPtr)(NDLNFCBLAPK,pVVar3->method);
    pSVar4 = System_String__Concat(StringLiteral_5497/*"Dump "*/,pSVar4,StringLiteral_513/*" pushed"*/,(MethodInfo *)0x0);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar4,(MethodInfo *)0x0);
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    pGVar5 = NDLNFCBLAPK->klass;
    uVar2._0_1_ = (pGVar5->_2).rank;
    uVar2._1_1_ = (pGVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pGVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
          pVVar3 = pGVar5->vtable + (*piVar7 + 5);
          goto LAB_035c7508;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(NDLNFCBLAPK,GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo
                          ,5);
LAB_035c7508:
    DHCOILBOGHE.fields._dateData =
         (System_DateTime_Fields)(*pVVar3->methodPtr)(NDLNFCBLAPK,pVVar3->method);
    if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      local_48.klass =
           (System_Enum_c *)
           Nekki_Utils_GlobalTimer__AddDeltaToDateTime(__this_00,DHCOILBOGHE,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(System_DateTime_TypeInfo,&local_48);
      pSVar4 = System_String__Format(StringLiteral_22271/*"{0:HH:mm MMM dd yyyy}"*/,arg0,(MethodInfo *)0x0);
      if (pSVar8 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar8->fields).super.super.invoke_impl)
                  ((pSVar8->fields).super.super.method_code,pSVar4,
                   (pSVar8->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void KJFENNDOBOB(Action<bool> BLMFLPJJMPF)  [RVA 0x34C7590]
// EINKKMIHCHI$$KJFENNDOBOB @ RVA 0x34C7590

void EINKKMIHCHI__KJFENNDOBOB
               (EINKKMIHCHI_o *__this,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  System_Action_HDBCDLKEHLD_NFNCDDAFPIM__o *BLMFLPJJMPF_00;
  GPFMGALHFJK_o *EMIJCAIFDML;
  
  if ((DAT_04568646 & 1) == 0) {
    FUN_01bab630(&System_Action<HDBCDLKEHLD_NFNCDDAFPIM>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_HEGCHDGDMHD_IDGJKNDJFBD__);
    FUN_01bab630(&EINKKMIHCHI_HEGCHDGDMHD_TypeInfo);
    FUN_01bab630(&StringLiteral_12124/*"SignIn"*/);
    DAT_04568646 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_HEGCHDGDMHD_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[2].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(__this_00 + 2,BLMFLPJJMPF);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12124/*"SignIn"*/,(MethodInfo *)0x0);
    bVar1 = (*(__this->klass->vtable)._21_HCDIBNJMKLH.methodPtr)
                      (__this,(__this->klass->vtable)._21_HCDIBNJMKLH.method);
    *(byte *)&__this_00[1].monitor = bVar1 & 1;
    EMIJCAIFDML = (__this->fields).KAKIHIMNDAE;
    BLMFLPJJMPF_00 =
         (System_Action_HDBCDLKEHLD_NFNCDDAFPIM__o *)
         thunk_FUN_01bda818(System_Action<HDBCDLKEHLD_NFNCDDAFPIM>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    BDDPEOBACJK__IMOEMLPDGNB((CMJMJFJOCMO_o *)EMIJCAIFDML,BLMFLPJJMPF_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EBHHFBBIJEK(SavedGameRequestStatus MNPKIDDPNBM, ISavedGameMetadata NDLNFCBLAPK, byte[] IMMNELPBGIF)  [RVA 0x34C76C0]
// EINKKMIHCHI$$EBHHFBBIJEK @ RVA 0x34C76C0

void EINKKMIHCHI__EBHHFBBIJEK
               (EINKKMIHCHI_o *__this,int32_t MNPKIDDPNBM,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *NDLNFCBLAPK,
               System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int32_t iVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *__this_00;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_c *pGVar7;
  System_Action_string__byte____o *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04568647 & 1) == 0) {
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_5498/*"Dump Loaded "*/);
    FUN_01bab630(&StringLiteral_5916/*"Error reading dump: "*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    FUN_01bab630(&StringLiteral_21950/*"version: "*/);
    FUN_01bab630(&StringLiteral_1381/*". Description: "*/);
    DAT_04568647 = 1;
  }
  if (MNPKIDDPNBM != 1) {
    local_58.klass =
         (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = MNPKIDDPNBM;
    pSVar5 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(StringLiteral_5916/*"Error reading dump: "*/,pSVar5,(MethodInfo *)0x0);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar5,(MethodInfo *)0x0);
    return;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values == (System_String_array *)0x0) goto LAB_035c7a80;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = StringLiteral_5498/*"Dump Loaded "*/;
    thunk_FUN_01c20e04(values->m_Items);
    local_58.klass =
         (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = 1;
    pSVar5 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_1381/*". Description: "*/;
        thunk_FUN_01c20e04();
        if (NDLNFCBLAPK == (GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *)0x0) {
LAB_035c7a80:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar7 = NDLNFCBLAPK->klass;
        uVar1._0_1_ = (pGVar7->_2).rank;
        uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
              pVVar6 = pGVar7->vtable + (*piVar10 + 2);
              goto LAB_035c78c0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)
                 FUN_01b81914(NDLNFCBLAPK,
                              GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,2);
LAB_035c78c0:
        pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(NDLNFCBLAPK,pVVar6->method);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar5;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_1377/*"."*/;
            thunk_FUN_01c20e04();
            pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
            NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar5,(MethodInfo *)0x0);
            pGVar7 = NDLNFCBLAPK->klass;
            uVar2._0_1_ = (pGVar7->_2).rank;
            uVar2._1_1_ = (pGVar7->_2).minimumAlignment;
            uVar9 = (ulong)uVar2;
            if (uVar9 != 0) {
              piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
                  pVVar6 = pGVar7->vtable + (*piVar10 + 2);
                  goto LAB_035c797c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            pVVar6 = (VirtualInvokeData *)
                     FUN_01b81914(NDLNFCBLAPK,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,2);
LAB_035c797c:
            pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(NDLNFCBLAPK,pVVar6->method);
            pGVar7 = NDLNFCBLAPK->klass;
            uVar3._0_1_ = (pGVar7->_2).rank;
            uVar3._1_1_ = (pGVar7->_2).minimumAlignment;
            uVar9 = (ulong)uVar3;
            if (uVar9 != 0) {
              piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
                  pVVar6 = pGVar7->vtable + (*piVar10 + 2);
                  goto LAB_035c79dc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            pVVar6 = (VirtualInvokeData *)
                     FUN_01b81914(NDLNFCBLAPK,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,2);
LAB_035c79dc:
            __this_00 = (System_String_o *)(*pVVar6->methodPtr)(NDLNFCBLAPK,pVVar6->method);
            if (((__this_00 != (System_String_o *)0x0) &&
                (iVar4 = System_String__IndexOf(__this_00,StringLiteral_21950/*"version: "*/,(MethodInfo *)0x0),
                StringLiteral_21950/*"version: "*/ != (System_String_o *)0x0)) &&
               (pSVar5 != (System_String_o *)0x0)) {
              pSVar5 = System_String__Substring
                                 (pSVar5,(StringLiteral_21950/*"version: "*/->fields)._stringLength + iVar4,
                                  (MethodInfo *)0x0);
              if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo);
              }
              pSVar8 = NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
              if (pSVar8 != (System_Action_string__byte____o *)0x0) {
                (*(code *)(pSVar8->fields).super.super.invoke_impl)
                          ((pSVar8->fields).super.super.method_code,pSVar5,IMMNELPBGIF,
                           (pSVar8->fields).super.super.method);
                return;
              }
            }
            goto LAB_035c7a80;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void IKFHKGFDHBP(string OGPGLGPMEPD)  [RVA 0x34C7A88]
// EINKKMIHCHI$$IKFHKGFDHBP @ RVA 0x34C7A88

void EINKKMIHCHI__IKFHKGFDHBP(EINKKMIHCHI_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Action_string__o *pSVar1;
  
  if ((DAT_04568648 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_3643/*"CB_AchievementUnlocked, id = "*/);
    DAT_04568648 = 1;
  }
  JLNPKGGFFDD = System_String__Concat(StringLiteral_3643/*"CB_AchievementUnlocked, id = "*/,OGPGLGPMEPD,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this_00,(Il2CppObject *)OGPGLGPMEPD,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = NHJCFGACFDF_TypeInfo->static_fields->EDCABNJMIHN;
    if (pSVar1 != (System_Action_string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c7b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,OGPGLGPMEPD,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool NCLOHJCDCEJ()  [RVA 0x34C7B64]
// EINKKMIHCHI$$NCLOHJCDCEJ @ RVA 0x34C7B64

bool EINKKMIHCHI__NCLOHJCDCEJ(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public void OGCCDLFHKLC(Action<bool> BLMFLPJJMPF)  [RVA 0x34C7B6C]
// EINKKMIHCHI$$OGCCDLFHKLC @ RVA 0x34C7B6C

void EINKKMIHCHI__OGCCDLFHKLC
               (EINKKMIHCHI_o *__this,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  GPFMGALHFJK_o *__this_00;
  
  __this_00 = (__this->fields).KAKIHIMNDAE;
  if (__this_00 != (GPFMGALHFJK_o *)0x0) {
    GPFMGALHFJK__OGCCDLFHKLC(__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void FOGOMNAOMBD()  [RVA 0x34C7B88]
// EINKKMIHCHI$$FOGOMNAOMBD @ RVA 0x34C7B88

void EINKKMIHCHI__FOGOMNAOMBD(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *extraout_x1;
  GPFMGALHFJK_o *pGVar2;
  
  if ((DAT_04568649 & 1) == 0) {
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_KILLFKNHDAO__);
    DAT_04568649 = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).KAKIHIMNDAE;
  uVar1 = thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo,method);
  System_Action<object>___ctor();
  if (pGVar2 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c7c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar2->klass->vtable)._36_NGICBBAGDJE.methodPtr)
              (pGVar2,uVar1,(pGVar2->klass->vtable)._36_NGICBBAGDJE.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override FJLAMDKMIHD MEHFGJDCBDP()  [RVA 0x34C7C20]
// EINKKMIHCHI$$MEHFGJDCBDP @ RVA 0x34C7C20

int32_t EINKKMIHCHI__MEHFGJDCBDP(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public override void CLNAOMIIBLH()  [RVA 0x34C7C28]
// EINKKMIHCHI$$CLNAOMIIBLH @ RVA 0x34C7C28

void EINKKMIHCHI__CLNAOMIIBLH(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  if ((DAT_0456864a & 1) == 0) {
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    DAT_0456864a = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override bool NCJLBDIMPED()  [RVA 0x34C7C74]
// EINKKMIHCHI$$NCJLBDIMPED @ RVA 0x34C7C74

bool EINKKMIHCHI__NCJLBDIMPED(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public override void ECDBHGCNKBO(byte[] IMMNELPBGIF, bool BHPEJDOPLFD = True)  [RVA 0x34C7C7C]
// EINKKMIHCHI$$ECDBHGCNKBO @ RVA 0x34C7C7C

void EINKKMIHCHI__ECDBHGCNKBO
               (EINKKMIHCHI_o *__this,System_Byte_array *IMMNELPBGIF,bool BHPEJDOPLFD,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  int32_t iVar3;
  Il2CppObject *__this_00;
  ulong uVar4;
  GooglePlayGames_PlayGamesPlatform_o *pGVar5;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar6;
  ACHLOMELAJE_o *pAVar7;
  undefined8 uVar8;
  VirtualInvokeData *pVVar9;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar10;
  undefined8 *puVar11;
  int32_t *piVar12;
  
  if ((DAT_0456864b & 1) == 0) {
    FUN_01bab630(&System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo);
                    /* try { // try from 035c7cb4 to 036c7feb has its CatchHandler @ 035c7cb4
                       catch() { ... } // from try @ 035c7cb4 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c80b0 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c80dc with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c8484 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c8570 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c85b0 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c863c with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c8674 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c86bc with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c8708 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c8728 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c8774 with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c87ac with catch @ 035c7cb4
                       catch() { ... } // from try @ 035c87dc with catch @ 035c7cb4 */
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_KHJPDKHEBNN_MDBLGJAGJKE__);
    FUN_01bab630(&EINKKMIHCHI_KHJPDKHEBNN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17895/*"dump.save"*/);
    FUN_01bab630(&StringLiteral_11702/*"SaveDump - saving dump to the cloud"*/);
    FUN_01bab630(&StringLiteral_11700/*"SaveDump - error not signed in"*/);
    FUN_01bab630(&StringLiteral_11698/*"SaveDump - cloud save games disabled"*/);
    FUN_01bab630(&StringLiteral_11696/*"SaveDump - autosave disabled to level 3"*/);
    FUN_01bab630(&StringLiteral_11697/*"SaveDump - can't save dump while ListSF.Roster == null"*/);
    DAT_0456864b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_KHJPDKHEBNN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[2].klass = (Il2CppClass *)IMMNELPBGIF;
    *(bool *)&__this_00[1].monitor = BHPEJDOPLFD;
    thunk_FUN_01c20e04(__this_00 + 2,IMMNELPBGIF);
    uVar4 = (*(__this->klass->vtable)._21_HCDIBNJMKLH.methodPtr)
                      (__this,(__this->klass->vtable)._21_HCDIBNJMKLH.method);
    if ((uVar4 & 1) == 0) {
      puVar11 = &StringLiteral_11700/*"SaveDump - error not signed in"*/;
LAB_035c7fa8:
      NHJCFGACFDF__DHAAGKPHJLA
                ((NHJCFGACFDF_o *)__this,(System_String_o *)*puVar11,(MethodInfo *)0x0);
      return;
    }
    pGVar5 = (__this->fields).GJOCPBIBFCD;
    if (pGVar5 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
      pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(pGVar5,(MethodInfo *)0x0);
      if (pGVar6 == (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
        puVar11 = &StringLiteral_11698/*"SaveDump - cloud save games disabled"*/;
        goto LAB_035c7fa8;
      }
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0)
      {
        NHJCFGACFDF__ONCJPMNKDIM((NHJCFGACFDF_o *)__this,StringLiteral_11697/*"SaveDump - can't save dump while ListSF.Roster == null"*/,(MethodInfo *)0x0);
        return;
      }
      if (*(char *)&__this_00[1].monitor != '\0') {
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
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_035c7ff8;
        iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar7,(MethodInfo *)0x0);
        if (iVar3 < 3) {
          puVar11 = &StringLiteral_11696/*"SaveDump - autosave disabled to level 3"*/;
          goto LAB_035c7fa8;
        }
      }
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
      pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
        iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar7,(MethodInfo *)0x0);
        *(int32_t *)((long)&__this_00[1].monitor + 4) = iVar3;
        NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_11702/*"SaveDump - saving dump to the cloud"*/,(MethodInfo *)0x0);
        pGVar5 = (__this->fields).GJOCPBIBFCD;
        if (pGVar5 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
          pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(pGVar5,(MethodInfo *)0x0);
          uVar8 = thunk_FUN_01bda818(
                                    System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo
                                    );
          System_Action<Int32Enum,_object>___ctor();
          uVar2 = StringLiteral_17895/*"dump.save"*/;
          if (pGVar6 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
            pGVar10 = pGVar6->klass;
            uVar1._0_1_ = (pGVar10->_2).rank;
            uVar1._1_1_ = (pGVar10->_2).minimumAlignment;
            uVar4 = (ulong)uVar1;
            if (uVar4 != 0) {
              piVar12 = &((pGVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                  pVVar9 = pGVar10->vtable + *piVar12;
                  goto LAB_035c7fd0;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            pVVar9 = (VirtualInvokeData *)
                     FUN_01b81914(pGVar6,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,0);
LAB_035c7fd0:
                    /* try { // try from 035c7fec to 036c7ff3 has its CatchHandler @ 035c8784 */
                    /* WARNING: Could not recover jumptable at 0x035c7ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar9->methodPtr)(pGVar6,uVar2,0,0,uVar8,pVVar9->method);
            return;
          }
        }
      }
    }
  }
LAB_035c7ff8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void FNGMPMDBIKB()  [RVA 0x34C8004]
// EINKKMIHCHI$$FNGMPMDBIKB @ RVA 0x34C8004

void EINKKMIHCHI__FNGMPMDBIKB(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  GPFMGALHFJK_o *pGVar1;
  
                    /* try { // try from 035c8004 to 036c800b has its CatchHandler @ 035c8780 */
                    /* try { // try from 035c8020 to 036c8027 has its CatchHandler @ 035c80b8 */
  if ((DAT_0456864c & 1) == 0) {
    FUN_01bab630(&StringLiteral_12125/*"SignOut"*/);
    DAT_0456864c = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12125/*"SignOut"*/,(MethodInfo *)0x0);
  pGVar1 = (__this->fields).KAKIHIMNDAE;
  if (pGVar1 != (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c8064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pGVar1->klass->vtable)._32_EPIDMPBKPGE.methodPtr)
              (pGVar1,(pGVar1->klass->vtable)._32_EPIDMPBKPGE.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OPAJGJEKAPD(string OGPGLGPMEPD, bool HLJOHNIDBDM = True)  [RVA 0x34C806C]
// EINKKMIHCHI$$OPAJGJEKAPD @ RVA 0x34C806C

void EINKKMIHCHI__OPAJGJEKAPD
               (EINKKMIHCHI_o *__this,System_String_o *OGPGLGPMEPD,bool HLJOHNIDBDM,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  UnityEngine_SocialPlatforms_IAchievement_o *pUVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  UnityEngine_SocialPlatforms_IAchievement_c *pUVar11;
  ulong uVar12;
  int32_t *piVar13;
  void *pvVar14;
  void **ppvVar15;
  
                    /* try { // try from 035c806c to 036c8087 has its CatchHandler @ 035c80b4 */
                    /* try { // try from 035c8094 to 036c809b has its CatchHandler @ 035c877c */
  if ((DAT_0456864d & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 035c80a4 to 036c80af has its CatchHandler @ 035c80bc */
    FUN_01bab630(&Method_EINKKMIHCHI_HALGHBGIAKH_HIMDMFDBBLM__);
                    /* try { // try from 035c80b0 to 036c80d7 has its CatchHandler @ 035c7cb4 */
                    /* catch() { ... } // from try @ 035c806c with catch @ 035c80b4 */
                    /* catch() { ... } // from try @ 035c8020 with catch @ 035c80b8 */
    FUN_01bab630(&EINKKMIHCHI_HALGHBGIAKH_TypeInfo);
                    /* catch() { ... } // from try @ 035c80a4 with catch @ 035c80bc */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&UnityEngine_SocialPlatforms_IAchievement_TypeInfo);
                    /* try { // try from 035c80d8 to 036c80db has its CatchHandler @ 035c8680 */
                    /* try { // try from 035c80dc to 036c8463 has its CatchHandler @ 035c7cb4 */
    FUN_01bab630(&StringLiteral_15605/*"[UnlockAchievement] Error - Achievement already unlocked! Id: "*/);
    FUN_01bab630(&StringLiteral_15606/*"[UnlockAchievement] Error - Achievement null! Id: "*/);
    DAT_0456864d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_HALGHBGIAKH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar15 = &__this_00[1].monitor;
    *ppvVar15 = OGPGLGPMEPD;
    thunk_FUN_01c20e04(ppvVar15,OGPGLGPMEPD);
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar4 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar5,*ppvVar15,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      if (!bVar4) {
        pSVar9 = *ppvVar15;
        puVar10 = &StringLiteral_15606/*"[UnlockAchievement] Error - Achievement null! Id: "*/;
LAB_035c8188:
        pSVar9 = System_String__Concat((System_String_o *)*puVar10,pSVar9,(MethodInfo *)0x0);
        NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar9,(MethodInfo *)0x0);
        return;
      }
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
      if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar4 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar5,*ppvVar15,
                           Method_System_Collections_Generic_HashSet<string>_Contains__);
        if (bVar4) {
          if (!HLJOHNIDBDM) {
            return;
          }
          pSVar9 = *ppvVar15;
          puVar10 = &StringLiteral_15605/*"[UnlockAchievement] Error - Achievement already unlocked! Id: "*/;
          goto LAB_035c8188;
        }
        __this_01 = (__this->fields).GJOCPBIBFCD;
        if ((__this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) &&
           (pUVar6 = GooglePlayGames_PlayGamesPlatform__CreateAchievement
                               (__this_01,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_SocialPlatforms_IAchievement_o *)0x0)) {
          pUVar11 = pUVar6->klass;
          pvVar14 = *ppvVar15;
          uVar1._0_1_ = (pUVar11->_2).rank;
          uVar1._1_1_ = (pUVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar1;
          if (uVar12 != 0) {
            piVar13 = &((pUVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                pVVar7 = pUVar11->vtable + (*piVar13 + 2);
                goto LAB_035c8234;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pUVar6,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,2);
LAB_035c8234:
          (*pVVar7->methodPtr)(pUVar6,pvVar14,pVVar7->method);
          pUVar11 = pUVar6->klass;
          uVar2._0_1_ = (pUVar11->_2).rank;
          uVar2._1_1_ = (pUVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar13 = &((pUVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                pVVar7 = pUVar11->vtable + (*piVar13 + 3);
                goto LAB_035c8294;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pUVar6,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,3);
LAB_035c8294:
          (*pVVar7->methodPtr)(0x4059000000000000,pUVar6,pVVar7->method);
          uVar8 = thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
          System_Action<bool>___ctor();
          pUVar11 = pUVar6->klass;
          uVar3._0_1_ = (pUVar11->_2).rank;
          uVar3._1_1_ = (pUVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar3;
          if (uVar12 != 0) {
            piVar13 = &((pUVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                pVVar7 = pUVar11->vtable + *piVar13;
                goto LAB_035c8320;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pUVar6,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,0);
LAB_035c8320:
                    /* WARNING: Could not recover jumptable at 0x035c8338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar7->methodPtr)(pUVar6,uVar8,pVVar7->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

