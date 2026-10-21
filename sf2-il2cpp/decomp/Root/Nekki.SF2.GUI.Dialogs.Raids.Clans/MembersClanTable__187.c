// TypeDefIndex 187
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class MembersClanTable : MonoBehaviour
// Fields:
//   private Action<IDGOGBNEGAM> GHKNFLCOBON; // 0x20
//   private Action<IDGOGBNEGAM> APMAMLEKGIM; // 0x28
//   private Action<IDGOGBNEGAM> EKPABHKOHLJ; // 0x30
//   private Action<RectTransform, string> JDMBKBAKOFA; // 0x38
//   private List<DPDNFOCBGGD> EHNBACPAECJ; // 0x40
//   private List<IDGOGBNEGAM> NMNKHAIGHDG; // 0x48
//   private List<OPMDFMOAMKB> AIFLDFNIHBJ; // 0x50
//   private long CBBPNJDCFGK; // 0x58
//   private int FGDPLJNBMIN; // 0x60
//   private SimpleScroll PDHMLFAMNCO; // 0x68
//   private MembersClanCellMember JOCIOMFBPCF; // 0x70
//   private MembersClanCellSeparator DKPGKMHPMLL; // 0x78
//   private const string APDOJMBBLEC = "MembersClanCell_Player";
//   private const string AAIKNEHOLOL = "MembersClanCell_Separator";
//   private IEnumerator KBJGGFDFCEF; // 0x80
//   private Nullable<float> NEOEPOAJBFE; // 0x88

// ===== private void DFNDNMLDABJ(IDGOGBNEGAM IMMNELPBGIF)  [RVA 0x3113BB8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$DFNDNMLDABJ @ RVA 0x3113BB8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DFNDNMLDABJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_Action_IDGOGBNEGAM__o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).EKPABHKOHLJ;
  if (pSVar2 != (System_Action_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03213bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x3113C64]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$OnDestroy @ RVA 0x3113C64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  DCHAJIMIFHP_o *__this_00;
  HCKCBFOGMMJ_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar2;
  
  if ((DAT_0456659c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
    DAT_0456659c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KBCFIBAANHN(__this,method);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DIMBPBFLDNH(__this,method_00);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NJAGGANINGD(__this,method_01);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
     (__this_00 = (pKVar1->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
    DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
      JICOLGELJGE<object>__FAJIGDCHCKL
                ((JICOLGELJGE_T__o *)__this_01,(__this->fields).FGDPLJNBMIN,
                 Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
      ppNVar2 = &(__this->fields).PDHMLFAMNCO;
      *ppNVar2 = (Nekki_SF2_GUI_SimpleScroll_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator CMBKAMKEGLL()  [RVA 0x3113EE0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$CMBKAMKEGLL @ RVA 0x3113EE0

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__CMBKAMKEGLL
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456659d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF_TypeInfo);
    DAT_0456659d = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_PPBEIEICMNF_TypeInfo
                                 ,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void KBCFIBAANHN()  [RVA 0x3113D28]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$KBCFIBAANHN @ RVA 0x3113D28

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KBCFIBAANHN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456659e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456659e = 1;
  }
  ppSVar7 = &(__this->fields).KBJGGFDFCEF;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03213dd4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03213dd4:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void SetInfo(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x3113F74]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$SetInfo @ RVA 0x3113F74

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  EEGDOGKBLNG_o *__this_00;
  void *pvVar3;
  MGDJPGGPDJI_o *DKMMBMBMJBO;
  IDGOGBNEGAM_o *__this_01;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar5;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar6;
  IDGOGBNEGAM_array *pIVar7;
  int index;
  
  pMVar5 = (MethodInfo *)PBNPKBJKFHE;
  if ((DAT_0456659f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IDGOGBNEGAM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__);
    DAT_0456659f = 1;
    pMVar5 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DIMBPBFLDNH(__this,pMVar5);
  pMVar5 = extraout_x1_00;
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
LAB_0321411c:
    Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdatePlayersInfo(__this,pMVar5);
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    pvVar3 = (void *)EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pGVar6 = (PBNPKBJKFHE->fields).MABPCBMOECE;
    if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
      index = 0;
      pMVar5 = extraout_x1_01;
      do {
        if ((pGVar6->fields).count <= index) goto LAB_0321411c;
        DKMMBMBMJBO = (MGDJPGGPDJI_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__
                                );
        __this_01 = (IDGOGBNEGAM_o *)thunk_FUN_01bda818(IDGOGBNEGAM_TypeInfo);
        IDGOGBNEGAM___ctor(__this_01,DKMMBMBMJBO,(MethodInfo *)0x0);
        pGVar6 = (PBNPKBJKFHE->fields).MABPCBMOECE;
        if (((pGVar6 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) ||
            (pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__
                                ), pIVar4 == (Il2CppObject *)0x0)) ||
           (__this_01 == (IDGOGBNEGAM_o *)0x0)) break;
        (__this_01->fields).KGCEKHGKGFP = pvVar3 == pIVar4[1].monitor;
        lVar2 = Method_System_Collections_Generic_List<IDGOGBNEGAM>_Add__;
        __this_02 = (__this->fields).NMNKHAIGHDG;
        if (__this_02 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) break;
        pIVar7 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pIVar7 == (IDGOGBNEGAM_array *)0x0) break;
        uVar1 = (__this_02->fields)._size;
        if (uVar1 < (uint)pIVar7->max_length) {
          (__this_02->fields)._size = uVar1 + 1;
          pIVar7->m_Items[(int)uVar1] = __this_01;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,__this_01);
          pMVar5 = extraout_x1_02;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          pMVar5 = extraout_x1_03;
        }
        pGVar6 = (PBNPKBJKFHE->fields).MABPCBMOECE;
        index = index + 1;
      } while (pGVar6 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool MMPLIGDLCJF()  [RVA 0x3113C04]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$MMPLIGDLCJF @ RVA 0x3113C04

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SimpleScroll_o *x;
  
  if ((DAT_045665a0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045665a0 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).PDHMLFAMNCO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x31143E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$.ctor @ RVA 0x31143E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__o **ppSVar1;
  System_Action_RectTransform__string__o **ppSVar2;
  System_Collections_Generic_List_DPDNFOCBGGD__o *__this_00;
  System_Collections_Generic_List_DPDNFOCBGGD__o **ppSVar3;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_01;
  System_Collections_Generic_List_IDGOGBNEGAM__o **ppSVar4;
  System_Collections_Generic_List_OPMDFMOAMKB__o *__this_02;
  System_Collections_Generic_List_OPMDFMOAMKB__o **ppSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_IDGOGBNEGAM__o *pSVar6;
  System_Action_RectTransform__string__o *pSVar7;
  
  if ((DAT_045665a1 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPMDFMOAMKB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPMDFMOAMKB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<DPDNFOCBGGD>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_DLMBLEJEIPB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_DPCBNMABBFH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_IMKCPMGGBBB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_LJPHJEDJKAJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo);
    DAT_045665a1 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->__9__47_0
  ;
  if (pSVar6 == (System_Action_IDGOGBNEGAM__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo,method);
    }
    pSVar6 = (System_Action_IDGOGBNEGAM__o *)thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
               __9__47_0;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
    ppSVar1 = &(__this->fields).GHKNFLCOBON;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
             __9__47_1;
    if (pSVar6 == (System_Action_IDGOGBNEGAM__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__47_1;
      *ppSVar1 = pSVar6;
      thunk_FUN_01c20e04(ppSVar1,pSVar6);
    }
    ppSVar1 = &(__this->fields).APMAMLEKGIM;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
             __9__47_2;
    if (pSVar6 == (System_Action_IDGOGBNEGAM__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_IDGOGBNEGAM__o *)
               thunk_FUN_01bda818(System_Action<IDGOGBNEGAM>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__47_2;
      *ppSVar1 = pSVar6;
      thunk_FUN_01c20e04(ppSVar1,pSVar6);
    }
    ppSVar1 = &(__this->fields).EKPABHKOHLJ;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
             __9__47_3;
    if (pSVar7 == (System_Action_RectTransform__string__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pSVar7 = (System_Action_RectTransform__string__o *)
               thunk_FUN_01bda818(System_Action<RectTransform,_string>_TypeInfo);
      System_Action<object,_object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__47_3;
      *ppSVar2 = pSVar7;
      thunk_FUN_01c20e04(ppSVar2,pSVar7);
    }
    ppSVar2 = &(__this->fields).JDMBKBAKOFA;
    *ppSVar2 = pSVar7;
    thunk_FUN_01c20e04(ppSVar2,pSVar7);
    __this_00 = (System_Collections_Generic_List_DPDNFOCBGGD__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DPDNFOCBGGD>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<DPDNFOCBGGD>__ctor__);
    ppSVar3 = &(__this->fields).EHNBACPAECJ;
    *ppSVar3 = __this_00;
    thunk_FUN_01c20e04(ppSVar3,__this_00);
    __this_01 = (System_Collections_Generic_List_IDGOGBNEGAM__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IDGOGBNEGAM>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>__ctor__);
    ppSVar4 = &(__this->fields).NMNKHAIGHDG;
    *ppSVar4 = __this_01;
    thunk_FUN_01c20e04(ppSVar4,__this_01);
    __this_02 = (System_Collections_Generic_List_OPMDFMOAMKB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<OPMDFMOAMKB>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<OPMDFMOAMKB>__ctor__);
    ppSVar5 = &(__this->fields).AIFLDFNIHBJ;
    *ppSVar5 = __this_02;
    thunk_FUN_01c20e04(ppSVar5,__this_02);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateTable()  [RVA 0x31147A0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$UpdateTable @ RVA 0x31147A0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdateTable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Comparison_IDGOGBNEGAM__o **ppSVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_OPMDFMOAMKB__o *__this_00;
  DPDNFOCBGGD_o *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_DPDNFOCBGGD__o *pSVar7;
  DPDNFOCBGGD_array *pDVar8;
  int iVar9;
  System_Collections_Generic_List_IDGOGBNEGAM__o *pSVar10;
  int iVar11;
  System_Comparison_IDGOGBNEGAM__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045665a2 & 1) == 0) {
    FUN_01bab630(&System_Comparison<IDGOGBNEGAM>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPMDFMOAMKB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_MAKCLEHHMHN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo);
    DAT_045665a2 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).EHNBACPAECJ;
  if (pSVar7 != (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
    length = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar10 = (__this->fields).NMNKHAIGHDG;
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__32_0;
    if (comparison == (System_Comparison_IDGOGBNEGAM__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_IDGOGBNEGAM__o *)
                   thunk_FUN_01bda818(System_Comparison<IDGOGBNEGAM>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar5 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_<>c_TypeInfo->static_fields->
                 __9__32_0;
      *ppSVar5 = comparison;
      thunk_FUN_01c20e04(ppSVar5,comparison);
    }
    if (pSVar10 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)pSVar10,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<IDGOGBNEGAM>_Sort__);
      pSVar10 = (__this->fields).NMNKHAIGHDG;
      if (pSVar10 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
        iVar9 = (pSVar10->fields)._size;
        if (iVar9 < 1) {
LAB_03214980:
          __this_00 = (__this->fields).AIFLDFNIHBJ;
          if (__this_00 != (System_Collections_Generic_List_OPMDFMOAMKB__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<OPMDFMOAMKB>_GetEnumerator__);
            iVar9 = 0;
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while( true ) {
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_MoveNext__
                                );
              pIVar6 = local_70.fields._current;
              lVar3 = Method_System_Collections_Generic_List<DPDNFOCBGGD>_Add__;
              if (!bVar4) break;
              pSVar10 = (__this->fields).NMNKHAIGHDG;
              if (pSVar10 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((DPDNFOCBGGD_o *)local_70.fields._current == (DPDNFOCBGGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (((DPDNFOCBGGD_o *)((long)local_70.fields._current + 0x18))->klass ==
                  (DPDNFOCBGGD_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar11 = (pSVar10->fields)._size;
              iVar1 = *(int *)&(((DPDNFOCBGGD_o *)((long)local_70.fields._current + 0x18))->klass->
                               _1).name;
              if (iVar1 <= iVar11) {
                iVar11 = iVar1;
              }
              if (iVar11 <= iVar9) break;
              pSVar7 = (__this->fields).EHNBACPAECJ;
              if (pSVar7 == (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pDVar8 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pDVar8 == (DPDNFOCBGGD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pDVar8->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pDVar8->m_Items[(int)uVar2] = (DPDNFOCBGGD_o *)local_70.fields._current;
                thunk_FUN_01c20e04(pDVar8->m_Items + (int)uVar2,local_70.fields._current);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,
                           local_70.fields._current,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              do {
                pSVar10 = (__this->fields).NMNKHAIGHDG;
                    /* try { // try from 03214a70 to 03314b7f has its CatchHandler @ 03214a70
                       catch() { ... } // from try @ 03214a70 with catch @ 03214a70
                       catch() { ... } // from try @ 03214c90 with catch @ 03214a70
                       catch() { ... } // from try @ 03214cc8 with catch @ 03214a70
                       catch() { ... } // from try @ 03214d08 with catch @ 03214a70
                       catch() { ... } // from try @ 03214d38 with catch @ 03214a70 */
                if (pSVar10 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar7 = (__this->fields).EHNBACPAECJ;
                item = (DPDNFOCBGGD_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar10,iVar9,
                                  Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Item__);
                lVar3 = Method_System_Collections_Generic_List<DPDNFOCBGGD>_Add__;
                if (pSVar7 == (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pDVar8 = (pSVar7->fields)._items;
                (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
                if (pDVar8 == (DPDNFOCBGGD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar7->fields)._size;
                if (uVar2 < (uint)pDVar8->max_length) {
                  (pSVar7->fields)._size = uVar2 + 1;
                  pDVar8->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar7,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                iVar9 = iVar9 + 1;
              } while (iVar11 != iVar9);
              if (((DPDNFOCBGGD_o *)((long)pIVar6 + 0x18))->klass == (DPDNFOCBGGD_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar9 = *(int *)&(((DPDNFOCBGGD_o *)((long)pIVar6 + 0x18))->klass->_1).name;
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<OPMDFMOAMKB>_Dispose__);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NCDOMAGEGCF(__this,method_00);
            return;
          }
        }
        else {
          iVar11 = 1;
          do {
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar10,iVar11 + -1,
                                Method_System_Collections_Generic_List<IDGOGBNEGAM>_get_Item__);
            if (pIVar6 == (Il2CppObject *)0x0) break;
            *(int *)((long)&pIVar6[1].klass + 4) = iVar11;
            if (iVar9 == iVar11) goto LAB_03214980;
            pSVar10 = (__this->fields).NMNKHAIGHDG;
            iVar11 = iVar11 + 1;
          } while (pSVar10 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NJAGGANINGD()  [RVA 0x3113E70]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$NJAGGANINGD @ RVA 0x3113E70

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NJAGGANINGD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_OPMDFMOAMKB__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045665a3 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<OPMDFMOAMKB>_Clear__);
    DAT_045665a3 = 1;
  }
  pSVar1 = (__this->fields).AIFLDFNIHBJ;
  if (pSVar1 != (System_Collections_Generic_List_OPMDFMOAMKB__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void BADMDODBKLB(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3114E7C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$BADMDODBKLB @ RVA 0x3114E7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__BADMDODBKLB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 03214e98 to 03314e9f has its CatchHandler @ 03214fd8 */
  if ((DAT_045665a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
                    /* try { // try from 03214eb0 to 03314ebb has its CatchHandler @ 03214fc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
                    /* try { // try from 03214ed0 to 03314ed7 has its CatchHandler @ 03214f2c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
                    /* try { // try from 03214ee0 to 03314eeb has its CatchHandler @ 03214f28 */
    DAT_045665a4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    HEHMPFLAEGE = (GKLPDMLELJF_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    __this_00 = (__this->fields).NMNKHAIGHDG;
    if (__this_00 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* try { // try from 03214f0c to 03314f13 has its CatchHandler @ 03214fc0 */
                    /* try { // try from 03214f14 to 03314f3b has its CatchHandler @ 03214de4 */
                    /* catch() { ... } // from try @ 03214ee0 with catch @ 03214f28 */
                    /* catch() { ... } // from try @ 03214ed0 with catch @ 03214f2c */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
      do {
                    /* try { // try from 03214f3c to 03314f3f has its CatchHandler @ 03214fb4 */
                    /* try { // try from 03214f40 to 03314f7b has its CatchHandler @ 03214de4 */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__
                          );
        if (!bVar1) {
                    /* try { // try from 03214f98 to 03314faf has its CatchHandler @ 03215040 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
          return;
        }
        if ((IDGOGBNEGAM_o *)local_48.fields._current == (IDGOGBNEGAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03214fb0 to 03314fef has its CatchHandler @ 03214de4 */
          FUN_01bab8c8();
        }
        if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03214f3c with catch @ 03214fb4 */
          FUN_01bab8c8();
        }
      } while (((IDGOGBNEGAM_Fields *)((long)local_48.fields._current + 0x10))->HLFBMBHOPMI !=
               (HEHMPFLAEGE->fields).ANAJGHJEEOC);
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__HFOJDCKMPJB
                        ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)(ulong)bVar1,
                         (IDGOGBNEGAM_o *)local_48.fields._current,HEHMPFLAEGE,in_x3);
                    /* try { // try from 03214f7c to 03314f7f has its CatchHandler @ 03214fcc */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__)
      ;
                    /* try { // try from 03214f80 to 03314f87 has its CatchHandler @ 03214fc4 */
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__JLKJMLBAHAG(__this,method_00);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KCEMINEPNDF(RectTransform FPANKOCKNJA, string KLEGNFLIAPC)  [RVA 0x3115270]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$KCEMINEPNDF @ RVA 0x3115270

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KCEMINEPNDF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               UnityEngine_RectTransform_o *FPANKOCKNJA,System_String_o *KLEGNFLIAPC,
               MethodInfo *method)

{
  System_Action_RectTransform__string__o *pSVar1;
  
  pSVar1 = (__this->fields).JDMBKBAKOFA;
  if (pSVar1 != (System_Action_RectTransform__string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0321528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,FPANKOCKNJA,KLEGNFLIAPC,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdatePlayersInfo()  [RVA 0x3114138]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$UpdatePlayersInfo @ RVA 0x3114138

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdatePlayersInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IBMLPPNMDCI_o *__this_00;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  HCKCBFOGMMJ_o *pHVar3;
  System_Action_T__o *BLMFLPJJMPF;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045665a5 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_MJLGFNFIHFJ__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_045665a5 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).NMNKHAIGHDG;
  if (__this_01 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
      if (!bVar1) break;
      if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_02,(int64_t)local_70.fields._current[3].monitor,
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pHVar3 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
    System_Action<object>___ctor();
    if (pHVar3 != (HCKCBFOGMMJ_o *)0x0) {
      iVar2 = JICOLGELJGE<object>__OPCNBJOLDNG
                        ((JICOLGELJGE_T__o *)pHVar3,BLMFLPJJMPF,
                         Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
      (__this->fields).FGDPLJNBMIN = iVar2;
      pHVar3 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      BLMFLPJJMPF_00 =
           (System_Action_LFELBGMCDHD__o *)thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
      System_Action<object>___ctor();
      if (pHVar3 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__EFCMPBGIEGJ(pHVar3,__this_00,BLMFLPJJMPF_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JLKJMLBAHAG()  [RVA 0x311507C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$JLKJMLBAHAG @ RVA 0x311507C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__JLKJMLBAHAG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this_01;
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045665a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo);
    auVar5 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045665a6 = 1;
  }
  uVar3 = auVar5._0_8_;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pNVar4 = (__this->fields).PDHMLFAMNCO;
  if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    __this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar4->fields)._snapEase;
    uVar3 = 0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
          return;
        }
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)local_50.fields._current ==
            (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) {
LAB_03215178:
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo->_2).
                  naturalAligment;
          if ((((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_c *)
               (local_50.fields._current)->klass)->_2).naturalAligment < bVar1) goto LAB_03215178;
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)
                      local_50.fields._current;
          if ((((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_c *)
               (local_50.fields._current)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo) {
            __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateDanAndStatus
                    (__this_01,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar5._8_8_);
}


// ===== public void SetChangableRole(bool IFHOOJNDIKL, KCFAKHLDKJM BGAKDPJEAIB)  [RVA 0x3115294]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$SetChangableRole @ RVA 0x3115294

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetChangableRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,bool IFHOOJNDIKL,
               int32_t BGAKDPJEAIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045665a7 & 1) == 0) {
                    /* try { // try from 032152c0 to 033152c7 has its CatchHandler @ 03215368 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
                    /* try { // try from 032152dc to 033152e7 has its CatchHandler @ 03215360 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
                    /* try { // try from 032152f0 to 033152f7 has its CatchHandler @ 0321535c */
    DAT_045665a7 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NMNKHAIGHDG;
                    /* try { // try from 03215304 to 0331530b has its CatchHandler @ 03215358 */
  if (__this_00 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0321530c to 0331534f has its CatchHandler @ 0321521c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
                    /* try { // try from 03215350 to 03315353 has its CatchHandler @ 03215364 */
    if (!bVar2) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032153b8 with catch @ 032153d4
                       catch(type#2 @ 00000000) { ... } // from try @ 032153cc with catch @ 032153d4
                        */
                    /* try { // try from 032153d8 to 03315483 has its CatchHandler @ 032153d8
                       catch() { ... } // from try @ 032153d8 with catch @ 032153d8
                       catch() { ... } // from try @ 032154b4 with catch @ 032153d8
                       catch() { ... } // from try @ 032154fc with catch @ 032153d8
                       catch() { ... } // from try @ 03215524 with catch @ 032153d8
                       catch() { ... } // from try @ 03215564 with catch @ 032153d8 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__)
      ;
      return;
    }
                    /* try { // try from 03215354 to 0331537f has its CatchHandler @ 0321521c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215304 with catch @ 03215358
                        */
    if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032152f0 with catch @ 0321535c
                        */
    iVar1 = *(int *)&local_60.fields._current[3].klass;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032152dc with catch @ 03215360
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215350 with catch @ 03215364
                        */
    if (IFHOOJNDIKL) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
LAB_032153fc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03215380 to 03315383 has its CatchHandler @ 032153b0 */
                    /* try { // try from 03215384 to 033153b7 has its CatchHandler @ 0321521c */
      *(bool *)((long)&local_60.fields._current[4].klass + 1) =
           iVar1 != 4 && 0 < iVar1 - BGAKDPJEAIB;
      if (iVar1 - BGAKDPJEAIB < 2) goto LAB_032153b4;
      bVar2 = true;
    }
    else {
      if (local_60.fields._current == (Il2CppObject *)0x0) goto LAB_032153fc;
                    /* catch() { ... } // from try @ 03215380 with catch @ 032153b0 */
      *(undefined1 *)((long)&local_60.fields._current[4].klass + 1) = 0;
LAB_032153b4:
                    /* try { // try from 032153b8 to 033153bf has its CatchHandler @ 032153d4 */
      if (BGAKDPJEAIB == 1) {
        bVar2 = iVar1 != 1;
                    /* try { // try from 032153c0 to 033153cb has its CatchHandler @ 0321521c */
      }
      else {
        bVar2 = false;
      }
    }
                    /* try { // try from 032153cc to 033153d3 has its CatchHandler @ 032153d4 */
    *(bool *)&local_60.fields._current[4].klass = bVar2;
  } while( true );
}


// ===== private void IOAHHMFLNOL(IDGOGBNEGAM IMMNELPBGIF)  [RVA 0x3115470]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$IOAHHMFLNOL @ RVA 0x3115470

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__IOAHHMFLNOL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_Action_IDGOGBNEGAM__o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
                    /* try { // try from 03215484 to 0331548b has its CatchHandler @ 03215504 */
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).GHKNFLCOBON;
                    /* try { // try from 03215498 to 033154b3 has its CatchHandler @ 03215508 */
  if (pSVar2 != (System_Action_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032154b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 032154b4 to 033154f7 has its CatchHandler @ 032153d8 */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnShowHintRole(Action<RectTransform, string> CJNHFNHJHPE)  [RVA 0x31154BC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$remove_OnShowHintRole @ RVA 0x31154BC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnShowHintRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_RectTransform__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RectTransform__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RectTransform__string__o *pSVar5;
  System_Action_RectTransform__string__o **ppSVar6;
  System_Action_RectTransform__string__o *source;
  
  if ((DAT_045665a8 & 1) == 0) {
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    DAT_045665a8 = 1;
  }
  ppSVar6 = &(__this->fields).JDMBKBAKOFA;
                    /* try { // try from 032154f8 to 033154fb has its CatchHandler @ 03215500 */
                    /* try { // try from 032154fc to 0331551f has its CatchHandler @ 032153d8 */
  source = *ppSVar6;
  do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032154f8 with catch @ 03215500
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215484 with catch @ 03215504
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215498 with catch @ 03215508
                        */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RectTransform,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 03215520 to 03315523 has its CatchHandler @ 0321554c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RectTransform,_string>_TypeInfo);
                    /* try { // try from 03215524 to 0331555b has its CatchHandler @ 032153d8 */
      if (lVar4 == 0) {
                    /* try { // try from 03215564 to 0331556f has its CatchHandler @ 032153d8 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RectTransform__string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* catch() { ... } // from try @ 03215520 with catch @ 0321554c */
                    /* try { // try from 0321555c to 03315563 has its CatchHandler @ 03215578 */
  return;
}


// ===== public void add_OnRoleDown(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x311556C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$add_OnRoleDown @ RVA 0x311556C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnRoleDown
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *a;
  
                    /* try { // try from 03215570 to 03315577 has its CatchHandler @ 03215578 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321555c with catch @ 03215578
                       catch(type#2 @ 00000000) { ... } // from try @ 03215570 with catch @ 03215578
                        */
  if ((DAT_045665a9 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665a9 = 1;
  }
  ppSVar6 = &(__this->fields).EKPABHKOHLJ;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void DIMBPBFLDNH()  [RVA 0x3113E00]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$DIMBPBFLDNH @ RVA 0x3113E00

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__DIMBPBFLDNH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_IDGOGBNEGAM__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045665aa & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_Clear__);
    DAT_045665aa = 1;
  }
  pSVar1 = (__this->fields).NMNKHAIGHDG;
  if (pSVar1 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void NCDOMAGEGCF()  [RVA 0x3114BD8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$NCDOMAGEGCF @ RVA 0x3114BD8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__NCDOMAGEGCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_DPDNFOCBGGD__o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  int CJNHFNHJHPE;
  int CJNHFNHJHPE_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03214be0 to 03314bef has its CatchHandler @ 03214cdc */
  if ((DAT_045665ab & 1) == 0) {
                    /* try { // try from 03214c00 to 03314c03 has its CatchHandler @ 03214cd0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_Dispose__);
                    /* try { // try from 03214c04 to 03314c0f has its CatchHandler @ 03214cd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPDNFOCBGGD>_GetEnumerator__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_8943/*"MembersClanCell_Player"*/);
    FUN_01bab630(&StringLiteral_8944/*"MembersClanCell_Separator"*/);
                    /* try { // try from 03214c50 to 03314c6b has its CatchHandler @ 03214cd4 */
    DAT_045665ab = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar2 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF(__this,method);
  if (bVar2) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03214c80 to 03314c8f has its CatchHandler @ 03214ccc */
    if (!bVar2) {
      return;
    }
    __this_01 = (__this->fields).EHNBACPAECJ;
    if (__this_01 != (System_Collections_Generic_List_DPDNFOCBGGD__o *)0x0) {
                    /* try { // try from 03214c90 to 03314cbb has its CatchHandler @ 03214a70 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<DPDNFOCBGGD>_GetEnumerator__);
      CJNHFNHJHPE = 0;
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
                    /* try { // try from 03214cbc to 03314cbf has its CatchHandler @ 03214ce4 */
      CJNHFNHJHPE_00 = 0;
                    /* try { // try from 03214cc0 to 03314cc7 has its CatchHandler @ 03214ce0 */
                    /* try { // try from 03214cc8 to 03314d03 has its CatchHandler @ 03214a70 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c80 with catch @ 03214ccc
                        */
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_MoveNext__
                               ), bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c00 with catch @ 03214cd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c50 with catch @ 03214cd4
                        */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214c04 with catch @ 03214cd8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214be0 with catch @ 03214cdc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214cc0 with catch @ 03214ce0
                        */
        if (*(int *)&local_50.fields._current[1].klass == 0) {
          CJNHFNHJHPE_00 = CJNHFNHJHPE_00 + 1;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214cbc with catch @ 03214ce4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03214b94 with catch @ 03214ce8
                        */
        if (*(int *)&local_50.fields._current[1].klass == 1) {
          CJNHFNHJHPE = CJNHFNHJHPE + 1;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<DPDNFOCBGGD>_Dispose__)
      ;
                    /* try { // try from 03214d04 to 03314d07 has its CatchHandler @ 03214d28 */
      pNVar3 = (__this->fields).PDHMLFAMNCO;
                    /* try { // try from 03214d08 to 03314d2f has its CatchHandler @ 03214a70 */
      if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ReservePool
                  (pNVar3,CJNHFNHJHPE_00,StringLiteral_8943/*"MembersClanCell_Player"*/,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).PDHMLFAMNCO;
                    /* catch() { ... } // from try @ 03214d04 with catch @ 03214d28 */
        if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 03214d30 to 03314d37 has its CatchHandler @ 03214d4c */
                    /* try { // try from 03214d38 to 03314d43 has its CatchHandler @ 03214a70 */
          Nekki_SF2_GUI_SimpleScroll__ReservePool
                    (pNVar3,CJNHFNHJHPE,StringLiteral_8944/*"MembersClanCell_Separator"*/,(MethodInfo *)0x0);
                    /* try { // try from 03214d44 to 03314d4b has its CatchHandler @ 03214d4c */
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__KBCFIBAANHN(__this,method_00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03214d30 with catch @ 03214d4c
                       catch(type#2 @ 00000000) { ... } // from try @ 03214d44 with catch @ 03214d4c
                        */
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__ScrollClearData(__this,method_01);
          pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__CMBKAMKEGLL(__this,method_02)
          ;
          if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
            pPVar7 = pPVar4->klass;
            uVar1._0_1_ = (pPVar7->_2).rank;
            uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
            uVar8 = (ulong)uVar1;
            if (uVar8 != 0) {
              piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar6 = pPVar7->vtable + *piVar9;
                  goto LAB_03214dc4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_03214dc4:
            pSVar5 = (System_Collections_IEnumerator_o *)
                     (*pVVar6->methodPtr)(pPVar4,pSVar5,1,pVVar6->method);
            ppSVar10 = &(__this->fields).KBJGGFDFCEF;
            *ppSVar10 = pSVar5;
                    /* try { // try from 03214de4 to 03314e97 has its CatchHandler @ 03214de4
                       catch() { ... } // from try @ 03214de4 with catch @ 03214de4
                       catch() { ... } // from try @ 03214f14 with catch @ 03214de4
                       catch() { ... } // from try @ 03214f40 with catch @ 03214de4
                       catch() { ... } // from try @ 03214fb0 with catch @ 03214de4
                       catch() { ... } // from try @ 03214ff4 with catch @ 03214de4
                       catch() { ... } // from try @ 0321502c with catch @ 03214de4 */
            thunk_FUN_01c20e04(ppSVar10,pSVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CHCADLEFDHN(IDGOGBNEGAM IMMNELPBGIF)  [RVA 0x31156C0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$CHCADLEFDHN @ RVA 0x31156C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__CHCADLEFDHN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  System_Action_IDGOGBNEGAM__o *pSVar2;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).APMAMLEKGIM;
  if (pSVar2 != (System_Action_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03215704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03215708 to 0331570f has its CatchHandler @ 032157bc */
  FUN_01bab8c8();
}


// ===== public void add_OnKick(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x311570C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$add_OnKick @ RVA 0x311570C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnKick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *a;
  
                    /* try { // try from 03215728 to 0331572f has its CatchHandler @ 032157b8 */
  if ((DAT_045665ac & 1) == 0) {
                    /* try { // try from 03215738 to 0331573f has its CatchHandler @ 032157a8 */
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665ac = 1;
  }
  ppSVar6 = &(__this->fields).GHKNFLCOBON;
                    /* try { // try from 0321574c to 03315753 has its CatchHandler @ 032157a4 */
  a = *ppSVar6;
  do {
                    /* try { // try from 03215754 to 03315797 has its CatchHandler @ 0321563c */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215798 with catch @ 032157b4
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215728 with catch @ 032157b8
                        */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 03215798 to 0331579b has its CatchHandler @ 032157b4 */
  } while (bVar2);
                    /* try { // try from 0321579c to 0331579f has its CatchHandler @ 032157ac */
                    /* try { // try from 032157a0 to 033157cb has its CatchHandler @ 0321563c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321574c with catch @ 032157a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215738 with catch @ 032157a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321579c with catch @ 032157ac
                        */
  return;
}


// ===== public void remove_OnRoleDown(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x31157BC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$remove_OnRoleDown @ RVA 0x31157BC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleDown
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *source;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215708 with catch @ 032157bc
                        */
                    /* try { // try from 032157cc to 033157cf has its CatchHandler @ 032157f4 */
                    /* try { // try from 032157d0 to 033157fb has its CatchHandler @ 0321563c */
  if ((DAT_045665ad & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665ad = 1;
  }
                    /* catch() { ... } // from try @ 032157cc with catch @ 032157f4 */
  ppSVar6 = &(__this->fields).EKPABHKOHLJ;
                    /* try { // try from 032157fc to 03315803 has its CatchHandler @ 03215818 */
  source = *ppSVar6;
  do {
                    /* try { // try from 03215804 to 0331580f has its CatchHandler @ 0321563c */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
                    /* try { // try from 03215810 to 03315817 has its CatchHandler @ 03215818 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032157fc with catch @ 03215818
                       catch(type#2 @ 00000000) { ... } // from try @ 03215810 with catch @ 03215818
                        */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void add_OnRoleUp(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x311586C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$add_OnRoleUp @ RVA 0x311586C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnRoleUp
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *a;
  
  if ((DAT_045665ae & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665ae = 1;
  }
  ppSVar6 = &(__this->fields).APMAMLEKGIM;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ScrollClearData()  [RVA 0x311561C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$ScrollClearData @ RVA 0x311561C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__ScrollClearData
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  float fVar2;
  float value;
  System_Nullable_float__Fields local_28;
  
  if ((DAT_045665af & 1) == 0) {
                    /* try { // try from 0321563c to 03315707 has its CatchHandler @ 0321563c
                       catch() { ... } // from try @ 0321563c with catch @ 0321563c
                       catch() { ... } // from try @ 03215754 with catch @ 0321563c
                       catch() { ... } // from try @ 032157a0 with catch @ 0321563c
                       catch() { ... } // from try @ 032157d0 with catch @ 0321563c
                       catch() { ... } // from try @ 03215804 with catch @ 0321563c */
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    DAT_045665af = 1;
  }
  pNVar1 = (__this->fields).PDHMLFAMNCO;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    value = (__this->fields).NEOEPOAJBFE.fields.value;
    fVar2 = Nekki_SF2_GUI_SimpleScroll__GetScrollPos(pNVar1,(MethodInfo *)0x0);
    if (value <= fVar2) {
      value = fVar2;
    }
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_28,value,Method_System_Nullable<float>__ctor__);
    pNVar1 = (__this->fields).PDHMLFAMNCO;
    (__this->fields).NEOEPOAJBFE.fields = local_28;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetKickable(bool CKPLGFKDOHC, KCFAKHLDKJM BGAKDPJEAIB)  [RVA 0x311591C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$SetKickable @ RVA 0x311591C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetKickable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,bool CKPLGFKDOHC,
               int32_t BGAKDPJEAIB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045665b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    DAT_045665b0 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NMNKHAIGHDG;
  if (__this_00 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      *(bool *)((long)&local_48.fields._current[4].klass + 2) =
           0 < *(int *)&local_48.fields._current[3].klass - BGAKDPJEAIB && CKPLGFKDOHC;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnShowHintRole(Action<RectTransform, string> CJNHFNHJHPE)  [RVA 0x3115A74]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$add_OnShowHintRole @ RVA 0x3115A74

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__add_OnShowHintRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_RectTransform__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RectTransform__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RectTransform__string__o *pSVar5;
  System_Action_RectTransform__string__o **ppSVar6;
  System_Action_RectTransform__string__o *a;
  
  if ((DAT_045665b1 & 1) == 0) {
    FUN_01bab630(&System_Action<RectTransform,_string>_TypeInfo);
    DAT_045665b1 = 1;
  }
  ppSVar6 = &(__this->fields).JDMBKBAKOFA;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RectTransform,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RectTransform,_string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RectTransform__string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Init(SimpleScroll MGFBPKIBNJI, MembersClanCellMember JELBPAPODKH, MembersClanCellSeparator OCNEDDMPLEO)  [RVA 0x3115B24]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$Init @ RVA 0x3115B24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *JELBPAPODKH,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_o *OCNEDDMPLEO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_o **ppNVar1;
  KKLJIDJBFEI_o *pKVar2;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  MethodInfo *method_00;
  DCHAJIMIFHP_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o **ppNVar4;
  
  if ((DAT_045665b2 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_BADMDODBKLB__);
    FUN_01bab630(&StringLiteral_8943/*"MembersClanCell_Player"*/);
    FUN_01bab630(&StringLiteral_20480/*"refresh_player_event"*/);
    FUN_01bab630(&StringLiteral_8944/*"MembersClanCell_Separator"*/);
    DAT_045665b2 = 1;
  }
  (__this->fields).FGDPLJNBMIN = -1;
  ppNVar3 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar3 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar3,MGFBPKIBNJI);
  ppNVar4 = &(__this->fields).JOCIOMFBPCF;
  *ppNVar4 = JELBPAPODKH;
  thunk_FUN_01c20e04(ppNVar4,JELBPAPODKH);
  ppNVar1 = &(__this->fields).DKPGKMHPMLL;
  *ppNVar1 = OCNEDDMPLEO;
  thunk_FUN_01c20e04(ppNVar1,OCNEDDMPLEO);
  if (*ppNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar3,(MethodInfo *)0x0);
    if (*ppNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                (*ppNVar3,StringLiteral_8943/*"MembersClanCell_Player"*/,(Nekki_SF2_GUI_BaseScrollItem_o *)*ppNVar4,
                 (MethodInfo *)0x0);
      if (*ppNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                  (*ppNVar3,StringLiteral_8944/*"MembersClanCell_Separator"*/,
                   (Nekki_SF2_GUI_BaseScrollItem_o *)(__this->fields).DKPGKMHPMLL,(MethodInfo *)0x0)
        ;
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__IACPDAODGGJ(__this,method_00);
        pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
          __this_00 = (pKVar2->fields).super.FNHOHLGNHGN;
          EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_00 != (DCHAJIMIFHP_o *)0x0) {
            DCHAJIMIFHP__MPFFOIIBAKO(__this_00,StringLiteral_20480/*"refresh_player_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnRoleUp(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3115ED8]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$remove_OnRoleUp @ RVA 0x3115ED8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnRoleUp
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *source;
  
  if ((DAT_045665b3 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665b3 = 1;
  }
  ppSVar6 = &(__this->fields).APMAMLEKGIM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private bool HFOJDCKMPJB(IDGOGBNEGAM DKMMBMBMJBO, GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x311502C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$HFOJDCKMPJB @ RVA 0x311502C

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__HFOJDCKMPJB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *DKMMBMBMJBO,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
                    /* try { // try from 0321502c to 03315037 has its CatchHandler @ 03214de4 */
  if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
LAB_03215058:
    bVar2 = false;
  }
  else {
    if (DKMMBMBMJBO == (IDGOGBNEGAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03215038 to 0331503f has its CatchHandler @ 03215040 */
    iVar1 = (HEHMPFLAEGE->fields).PEBHLKLGDBM;
                    /* catch() { ... } // from try @ 03214f98 with catch @ 03215040
                       catch() { ... } // from try @ 03215024 with catch @ 03215040
                       catch() { ... } // from try @ 03215038 with catch @ 03215040 */
    if ((DKMMBMBMJBO->fields).NEKMDLBLENC == iVar1) {
      iVar3 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
      if ((DKMMBMBMJBO->fields).HHJIJKJCEOF == iVar3) goto LAB_03215058;
    }
    else {
      iVar3 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
    }
    bVar2 = true;
    (DKMMBMBMJBO->fields).NEKMDLBLENC = iVar1;
    (DKMMBMBMJBO->fields).HHJIJKJCEOF = iVar3;
  }
  return bVar2;
}


// ===== public void remove_OnKick(Action<IDGOGBNEGAM> CJNHFNHJHPE)  [RVA 0x3115F88]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$remove_OnKick @ RVA 0x3115F88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__remove_OnKick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o **ppSVar6;
  System_Action_IDGOGBNEGAM__o *source;
  
  if ((DAT_045665b4 & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_045665b4 = 1;
  }
  ppSVar6 = &(__this->fields).GHKNFLCOBON;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void MJLGFNFIHFJ(LFELBGMCDHD IMMNELPBGIF)  [RVA 0x3116038]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$MJLGFNFIHFJ @ RVA 0x3116038

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MJLGFNFIHFJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               LFELBGMCDHD_o *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *DKMMBMBMJBO;
  bool bVar1;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  HCKCBFOGMMJ_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  byte bVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045665b5 & 1) == 0) {
                    /* try { // try from 03216058 to 03316133 has its CatchHandler @ 03216058
                       catch() { ... } // from try @ 03216058 with catch @ 03216058
                       catch() { ... } // from try @ 03216158 with catch @ 03216058
                       catch() { ... } // from try @ 03216194 with catch @ 03216058
                       catch() { ... } // from try @ 032161bc with catch @ 03216058
                       catch() { ... } // from try @ 032161f4 with catch @ 03216058 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    DAT_045665b5 = 1;
    IMMNELPBGIF = (LFELBGMCDHD_o *)extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
  if (!bVar1) {
    __this_00 = (__this->fields).NMNKHAIGHDG;
    (__this->fields).FGDPLJNBMIN = -1;
    if (__this_00 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    bVar2 = 0;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__
                             ), DKMMBMBMJBO = local_50.fields._current, bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if ((IDGOGBNEGAM_o *)DKMMBMBMJBO == (IDGOGBNEGAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_01 == (HCKCBFOGMMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03216134 to 0331613b has its CatchHandler @ 032161a0 */
      __this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)
                  HCKCBFOGMMJ__LLEJFHJIBHC
                            (__this_01,
                             ((IDGOGBNEGAM_Fields *)((long)DKMMBMBMJBO + 0x10))->HLFBMBHOPMI,
                             (MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__HFOJDCKMPJB
                        (__this_02,(IDGOGBNEGAM_o *)DKMMBMBMJBO,(GKLPDMLELJF_o *)__this_02,in_x3);
      bVar2 = bVar2 | bVar1;
    }
                    /* try { // try from 03216150 to 03316157 has its CatchHandler @ 03216198 */
                    /* try { // try from 03216158 to 0331618f has its CatchHandler @ 03216058 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    if (bVar2 != 0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__JLKJMLBAHAG(__this,method_00);
    }
  }
  return;
}


// ===== private void IACPDAODGGJ()  [RVA 0x3115C94]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$IACPDAODGGJ @ RVA 0x3115C94

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__IACPDAODGGJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *MCFPOCKJGBM;
  bool bVar3;
  JMDPBFOCHHP_o *pJVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  OPMDFMOAMKB_o *__this_01;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar5;
  OPMDFMOAMKB_array *pOVar6;
  int BDFPDPINEIO;
  System_Collections_Generic_List_OPMDFMOAMKB__o *__this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045665b6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OPMDFMOAMKB>_Add__);
    FUN_01bab630(&OPMDFMOAMKB_TypeInfo);
    DAT_045665b6 = 1;
    method = extraout_x1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar5 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
      pJVar5 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (pJVar5->fields).BCEDGEOHECB,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_80,__this_00,
               Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_GetEnumerator__
              );
    BDFPDPINEIO = 0;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_MoveNext__
                        );
      MCFPOCKJGBM = local_80.fields._current.fields.value;
      if (!bVar3) {
        System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_Enumerator<int,_JMDPBFOCHHP_BFPCOCFHFHF>_Dispose__
                  );
        return;
      }
      __this_02 = (__this->fields).AIFLDFNIHBJ;
      __this_01 = (OPMDFMOAMKB_o *)thunk_FUN_01bda818(OPMDFMOAMKB_TypeInfo);
      OPMDFMOAMKB___ctor(__this_01,(JMDPBFOCHHP_BFPCOCFHFHF_o *)MCFPOCKJGBM,BDFPDPINEIO,
                         (MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<OPMDFMOAMKB>_Add__;
      if (__this_02 == (System_Collections_Generic_List_OPMDFMOAMKB__o *)0x0) break;
      pOVar6 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pOVar6 == (OPMDFMOAMKB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_02->fields)._size;
      if (uVar1 < (uint)pOVar6->max_length) {
        (__this_02->fields)._size = uVar1 + 1;
        pOVar6->m_Items[(int)uVar1] = __this_01;
        thunk_FUN_01c20e04(pOVar6->m_Items + (int)uVar1,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      BDFPDPINEIO = BDFPDPINEIO + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

