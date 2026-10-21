// Original name: Nekki.SF2.Core.Fights.Camera  (obfuscated BEPJMNAHCAD)
// TypeDefIndex 1444
// Namespace: 
// public class Camera : OMLLDCIMLBB<object>
// Fields:
//   private const float CBJGGECGMBC = 200;
//   private const float NNGMMCOHPBP = 50;
//   private Camera.HKFNKBEOOHP AGIAJGHBKAF; // 0x18
//   private Render LIICCFBEOLC; // 0x20
//   private MBALPICJBHF IMEDLCCHGNH; // 0x28
//   private GameUtils.FNHCJBGGHLH FGINMCCJOLH; // 0x30
//   private List<Model> EHJHKEEDKBE; // 0x38
//   private ModelNode NHAIFIDONLG; // 0x40
//   private ModelNode PHILCIHBBCB; // 0x48
//   private Location CNHHLPPHNCO; // 0x50
//   private ModelNode AGPJBDPFKDI; // 0x58
//   private ModelNode KKLAPLADFIG; // 0x60
//   private PreFight FLJPPMKLBLJ; // 0x68
//   private bool FDGNLPLKNGK; // 0x70
//   private bool MHNMALPDJFL; // 0x71
//   private float NLIBJEPHLNK; // 0x74
//   private bool ANNBPCDGAHJ; // 0x78
//   private float CDCDGKDNDAL; // 0x7C
//   private float OLFPNIHIDIN; // 0x80
//   private bool DLEANEAEAFF; // 0x84
//   private int OFPNGACGGLK; // 0x88
//   private bool LDPMIHNLHFE; // 0x8C
//   private readonly Vector3f DHAPNCKKICJ; // 0x90
//   private readonly Vector3f IOPCKIEMPHD; // 0x98
//   private readonly Vector3f GFMPHKPDJJN; // 0xA0
//   private readonly Vector3f MOLFEKODIID; // 0xA8
//   private readonly Vector3f LKHLLEPLJBG; // 0xB0
//   private readonly Vector3f ALAOMPHGJNN; // 0xB8
//   private readonly Vector3f KMAFCAIIJFD; // 0xC0
//   private readonly Vector3f MHPJFNKKGLC; // 0xC8
//   private readonly Vector3f FKPMDCMCOFH; // 0xD0
//   private readonly Vector3f NOKKLPJCCML; // 0xD8
//   private GameObject LDAKOINICNJ; // 0xE0

// ===== public void HCKFFOOHHMA(bool CJNHFNHJHPE)  [RVA 0x3189254]
// Camera$$HCKFFOOHHMA @ RVA 0x3189254

void Camera__HCKFFOOHHMA(Camera_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Render_o *__this_01;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  
  if ((DAT_045669fd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045669fd = 1;
  }
  pNVar2 = (__this->fields).FLJPPMKLBLJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLJPPMKLBLJ;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_032893b0;
    Nekki_SF2_GUI_Fight_PreFight__VisibleViewer(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((pNVar3 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032893b0;
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  if (CJNHFNHJHPE) {
    (__this->fields).FDGNLPLKNGK = true;
    return;
  }
  __this_01 = (__this->fields).LIICCFBEOLC;
  if (__this_01 != (Render_o *)0x0) {
    Render__IIMJPBCGBKN(__this_01,false,(MethodInfo *)0x0);
    return;
  }
LAB_032893b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f ECOCBHDPPMO()  [RVA 0x31893B4]
// Camera$$ECOCBHDPPMO @ RVA 0x31893B4

Vector3f_o * Camera__ECOCBHDPPMO(Camera_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  
  pIVar1 = (__this->fields).NHAIFIDONLG;
  if (pIVar1 != (ModelNode_o *)0x0) {
    return (pIVar1->fields).CNMHHKAMGPI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIJNILNOFCD()  [RVA 0x31893D0]
// Camera$$FIJNILNOFCD @ RVA 0x31893D0

void Camera__FIJNILNOFCD(Camera_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  Render_o *__this_00;
  ModelNode_o *pIVar2;
  GameUtils_FNHCJBGGHLH_o *pMVar3;
  ModelNode_o *pIVar4;
  ModelNode_o *pIVar5;
  float JKOJPEKLBCI;
  
  pIVar1 = (__this->fields).NHAIFIDONLG;
  if ((((pIVar1 != (ModelNode_o *)0x0) &&
       (pIVar2 = (__this->fields).AGPJBDPFKDI, pIVar2 != (ModelNode_o *)0x0)) &&
      (pIVar4 = (__this->fields).KKLAPLADFIG, pIVar4 != (ModelNode_o *)0x0)) &&
     (pIVar5 = (__this->fields).PHILCIHBBCB, pIVar5 != (ModelNode_o *)0x0)) {
    __this_00 = (__this->fields).LIICCFBEOLC;
    method = (MethodInfo *)(pIVar5->fields).CNMHHKAMGPI;
    if ((__this->fields).DLEANEAEAFF == false) {
      JKOJPEKLBCI = 0.0;
      if (__this_00 == (Render_o *)0x0) goto LAB_0328943c;
    }
    else {
      pMVar3 = (__this->fields).FGINMCCJOLH;
      if ((pMVar3 == (GameUtils_FNHCJBGGHLH_o *)0x0) || (__this_00 == (Render_o *)0x0))
      goto LAB_0328943c;
      JKOJPEKLBCI = (pMVar3->fields).GHIDOLCAFAE;
    }
    Render__DFEBCLGNDBG
              (__this_00,(Vector3f_o *)method,(pIVar1->fields).CNMHHKAMGPI,
               (PKHLGDMJPMF_o *)(pIVar2->fields).CNMHHKAMGPI,
               (PKHLGDMJPMF_o *)(pIVar4->fields).CNMHHKAMGPI,JKOJPEKLBCI,(MethodInfo *)0x0);
    return;
  }
LAB_0328943c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this,method);
}


// ===== public virtual void GIENGNEGHPJ(Location LBKOHHHPNIP)  [RVA 0x3189440]
// Camera$$GIENGNEGHPJ @ RVA 0x3189440

void Camera__GIENGNEGHPJ(Camera_o *__this,Location_o *LBKOHHHPNIP,MethodInfo *method)

{
  Render_o *pMVar1;
  Vector3f_o *CJNHFNHJHPE;
  ModelNode_o *pIVar2;
  UnityEngine_GameObject_o *JJHEGPBBMLG;
  Render_o **ppMVar3;
  Location_o **ppNVar4;
  
  if ((DAT_045669fe & 1) == 0) {
    FUN_01bab630(&Render_TypeInfo);
    DAT_045669fe = 1;
  }
  JJHEGPBBMLG = (__this->fields).LDAKOINICNJ;
  pMVar1 = (Render_o *)thunk_FUN_01bda818(Render_TypeInfo);
  Render___ctor(pMVar1,JJHEGPBBMLG,(MethodInfo *)0x0);
  ppMVar3 = &(__this->fields).LIICCFBEOLC;
  *ppMVar3 = pMVar1;
  thunk_FUN_01c20e04(ppMVar3,pMVar1);
  pIVar2 = (__this->fields).PHILCIHBBCB;
  if (pIVar2 != (ModelNode_o *)0x0) {
    (pIVar2->fields).DDMMFMCNPON = 0.0;
    pIVar2 = (__this->fields).NHAIFIDONLG;
    if (pIVar2 != (ModelNode_o *)0x0) {
      (pIVar2->fields).DDMMFMCNPON = 0.0;
      ppNVar4 = &(__this->fields).CNHHLPPHNCO;
      *ppNVar4 = LBKOHHHPNIP;
      thunk_FUN_01c20e04(ppNVar4,LBKOHHHPNIP);
      pMVar1 = (__this->fields).LIICCFBEOLC;
      if (pMVar1 != (Render_o *)0x0) {
        Render__GIENGNEGHPJ(pMVar1,*ppNVar4,(MethodInfo *)0x0);
        if (*ppNVar4 != (Location_o *)0x0) {
          CJNHFNHJHPE = Location__POHCCECOMPF(*ppNVar4,(MethodInfo *)0x0);
          pIVar2 = (__this->fields).PHILCIHBBCB;
          if (pIVar2 != (ModelNode_o *)0x0) {
            ModelNode__AGOEHONIGBH(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
            pIVar2 = (__this->fields).PHILCIHBBCB;
            if (pIVar2 != (ModelNode_o *)0x0) {
              ModelNode__LCOGNIMMOFL(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
              pIVar2 = (__this->fields).NHAIFIDONLG;
              if (pIVar2 != (ModelNode_o *)0x0) {
                ModelNode__AGOEHONIGBH(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
                pIVar2 = (__this->fields).NHAIFIDONLG;
                if (pIVar2 != (ModelNode_o *)0x0) {
                  ModelNode__LCOGNIMMOFL(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
                  (__this->fields).CDCDGKDNDAL = 0.0;
                  (__this->fields).ANNBPCDGAHJ = false;
                  (__this->fields).NLIBJEPHLNK = 0.0;
                  (__this->fields).MHNMALPDJFL = false;
                  (__this->fields).OFPNGACGGLK = 0;
                  (__this->fields).DLEANEAEAFF = false;
                  return;
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


// ===== private void OPDIEGGCJAL()  [RVA 0x3189580]
// Camera$$OPDIEGGCJAL @ RVA 0x3189580

void Camera__OPDIEGGCJAL(Camera_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  
  if ((__this->fields).MHNMALPDJFL != false) {
    fVar2 = (__this->fields).NLIBJEPHLNK;
    if (fVar2 <= 0.0) {
      (__this->fields).MHNMALPDJFL = false;
      Camera__GDNLJLFIHFE(__this,method);
      fVar2 = (__this->fields).NLIBJEPHLNK;
      method = extraout_x1;
    }
    (__this->fields).NLIBJEPHLNK = fVar2 + -1.0;
  }
  if ((__this->fields).ANNBPCDGAHJ != false) {
    fVar2 = (__this->fields).CDCDGKDNDAL;
    if (fVar2 <= 0.0) {
      (__this->fields).ANNBPCDGAHJ = false;
      Camera__MOOLAJIPEGE(__this,method);
      fVar2 = (__this->fields).CDCDGKDNDAL;
    }
    (__this->fields).CDCDGKDNDAL = fVar2 + -1.0;
  }
  if ((__this->fields).DLEANEAEAFF != false) {
    iVar1 = (__this->fields).OFPNGACGGLK;
    if (iVar1 < 1) {
      (__this->fields).DLEANEAEAFF = false;
    }
    (__this->fields).OFPNGACGGLK = iVar1 + -1;
  }
  return;
}


// ===== public Vector3f JJBJFMFBMGC()  [RVA 0x31896F0]
// Camera$$JJBJFMFBMGC @ RVA 0x31896F0

Vector3f_o * Camera__JJBJFMFBMGC(Camera_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  
  pIVar1 = (__this->fields).AGPJBDPFKDI;
  if (pIVar1 != (ModelNode_o *)0x0) {
    return (pIVar1->fields).CNMHHKAMGPI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HEBGKKNPOFG(Vector3f EKEMKOCPHPO, Vector3f PCGIENAHMFK, float LFJGFLNMBMC, bool OHHHOODPACJ, string BEOLPHEOACM, float NKLEIAMJEMN, float BPDGIJADMJC)  [RVA 0x318970C]
// Camera$$HEBGKKNPOFG @ RVA 0x318970C

void Camera__HEBGKKNPOFG
               (Camera_o *__this,Vector3f_o *EKEMKOCPHPO,Vector3f_o *PCGIENAHMFK,
               float LFJGFLNMBMC,bool OHHHOODPACJ,System_String_o *BEOLPHEOACM,float NKLEIAMJEMN,
               float BPDGIJADMJC,MethodInfo *method)

{
  Render_o *__this_00;
  
  __this_00 = (__this->fields).LIICCFBEOLC;
  if (__this_00 != (Render_o *)0x0) {
    Render__MENMLPHAGKO
              (__this_00,EKEMKOCPHPO,PCGIENAHMFK,LFJGFLNMBMC,OHHHOODPACJ,BEOLPHEOACM,NKLEIAMJEMN,
               BPDGIJADMJC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BIFCHHDOBDE()  [RVA 0x318972C]
// Camera$$BIFCHHDOBDE @ RVA 0x318972C

bool Camera__BIFCHHDOBDE(Camera_o *__this,MethodInfo *method)

{
  return (__this->fields).LDPMIHNLHFE;
}


// ===== private void GDNLJLFIHFE()  [RVA 0x3189610]
// Camera$$GDNLJLFIHFE @ RVA 0x3189610

void Camera__GDNLJLFIHFE(Camera_o *__this,MethodInfo *method)

{
  Render_o *__this_00;
  Camera_HKFNKBEOOHP_o *pBVar1;
  
  if ((DAT_045669ff & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045669ff = 1;
  }
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,1,(Il2CppObject *)0x0,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  pBVar1 = (__this->fields).AGIAJGHBKAF;
  if (pBVar1 != (Camera_HKFNKBEOOHP_o *)0x0) {
    if ((pBVar1->fields).OPNIEBGMEPI == false) {
      return;
    }
    __this_00 = (__this->fields).LIICCFBEOLC;
    if (__this_00 != (Render_o *)0x0) {
      Render__OLGJDFBPGGO
                (__this_00,(pBVar1->fields).EKEMKOCPHPO,(pBVar1->fields).MJNAHMEKOLE,
                 (pBVar1->fields).DFIBGGDJPLM,(MethodInfo *)0x0);
      pBVar1 = (__this->fields).AGIAJGHBKAF;
      if (pBVar1 != (Camera_HKFNKBEOOHP_o *)0x0) {
        (pBVar1->fields).OPNIEBGMEPI = false;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CJIFKLJPLMK(bool CJNHFNHJHPE)  [RVA 0x3189734]
// Camera$$CJIFKLJPLMK @ RVA 0x3189734

void Camera__CJIFKLJPLMK(Camera_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Render_o *__this_00;
  
  __this_00 = (__this->fields).LIICCFBEOLC;
  if (__this_00 != (Render_o *)0x0) {
    Render__CAOJFFBJOCG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void INCPDIIPMOC()  [RVA 0x3189754]
// Camera$$INCPDIIPMOC @ RVA 0x3189754

void Camera__INCPDIIPMOC(Camera_o *__this,MethodInfo *method)

{
  Render_o *__this_00;
  
  __this_00 = (__this->fields).LIICCFBEOLC;
  if (__this_00 != (Render_o *)0x0) {
    Render__ICOOOADKLOP(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MOOLAJIPEGE()  [RVA 0x318969C]
// Camera$$MOOLAJIPEGE @ RVA 0x318969C

void Camera__MOOLAJIPEGE(Camera_o *__this,MethodInfo *method)

{
  if ((DAT_04566a00 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566a00 = 1;
  }
  (__this->fields).OLFPNIHIDIN = 0.0;
  OMLLDCIMLBB<object>__CallEvent
            ((OMLLDCIMLBB_object__o *)__this,2,(Il2CppObject *)0x0,
             Method_OMLLDCIMLBB<object>_CallEvent__);
  return;
}


// ===== public void DDLPDAEGHBL(bool CJNHFNHJHPE)  [RVA 0x3189770]
// Camera$$DDLPDAEGHBL @ RVA 0x3189770

void Camera__DDLPDAEGHBL(Camera_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LDPMIHNLHFE = CJNHFNHJHPE;
  return;
}


// ===== public void LCBBHACMOJN()  [RVA 0x318977C]
// Camera$$LCBBHACMOJN @ RVA 0x318977C

void Camera__LCBBHACMOJN(Camera_o *__this,MethodInfo *method)

{
  Render_o *__this_00;
  
  __this_00 = (__this->fields).LIICCFBEOLC;
  if (__this_00 != (Render_o *)0x0) {
    Render__IIMJPBCGBKN(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EDOKJKEOIGD()  [RVA 0x318979C]
// Camera$$EDOKJKEOIGD @ RVA 0x318979C

void Camera__EDOKJKEOIGD(Camera_o *__this,MethodInfo *method)

{
  Render_o *pMVar1;
  
  pMVar1 = (__this->fields).LIICCFBEOLC;
  if (pMVar1 != (Render_o *)0x0) {
    (pMVar1->fields).JBHKLPKKJNA = (bool_conflict)((pMVar1->fields).JBHKLPKKJNA ^ 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KJGPPAJLLCP(Model BCKBBGCOMJD)  [RVA 0x31897C0]
// Camera$$KJGPPAJLLCP @ RVA 0x31897C0

void Camera__KJGPPAJLLCP(Camera_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a01 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_IndexOf__);
    DAT_04566a01 = 1;
  }
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<Model>_IndexOf__;
    DPJIDNBJIBG = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)BCKBBGCOMJD,
                             (MethodInfo_26E5A4C *)
                             Method_System_Collections_Generic_List<Model>_IndexOf__);
    if (DPJIDNBJIBG != -1) {
      Camera__MCEBBHDMEAE(__this,DPJIDNBJIBG,method_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GameObject IJGHEOJPJLH()  [RVA 0x31898F0]
// Camera$$IJGHEOJPJLH @ RVA 0x31898F0

UnityEngine_GameObject_o * Camera__IJGHEOJPJLH(Camera_o *__this,MethodInfo *method)

{
  return (__this->fields).LDAKOINICNJ;
}


// ===== private void DPDGNBFJJNC()  [RVA 0x31898F8]
// Camera$$DPDGNBFJJNC @ RVA 0x31898F8

void Camera__DPDGNBFJJNC(Camera_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  MBALPICJBHF_o *pMVar2;
  Render_o *__this_00;
  Il2CppClass *settings;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_e0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_04566a02 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04566a02 = 1;
    method = extraout_x1;
  }
  if (((__this->fields).ANNBPCDGAHJ == false) ||
     ((__this->fields).IMEDLCCHGNH == (MBALPICJBHF_o *)0x0)) {
    return;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    settings = pIVar1[3].klass;
    fVar10 = (__this->fields).CDCDGKDNDAL;
    fVar9 = (__this->fields).OLFPNIHIDIN;
    fVar3 = Core_Configs_Models_BuildSettingsExtension__EvaluateAmplitudeFactor
                      ((Core_Configs_Models_ShakeScreenParamsSettings_o *)settings,(MethodInfo *)0x0
                      );
    pMVar2 = (__this->fields).IMEDLCCHGNH;
    if (pMVar2 != (MBALPICJBHF_o *)0x0) {
      local_80.fakeValueActive = (pMVar2->fields).CKHKAPNMEKL.fields.fakeValueActive;
      local_80.inited = (pMVar2->fields).CKHKAPNMEKL.fields.inited;
      local_80._18_2_ = *(undefined2 *)&(pMVar2->fields).CKHKAPNMEKL.fields.field_0x12;
      local_80.hiddenValueOldByte4.fields =
           (pMVar2->fields).CKHKAPNMEKL.fields.hiddenValueOldByte4.fields;
      local_80.fakeValue = (pMVar2->fields).CKHKAPNMEKL.fields.fakeValue;
      local_80.currentCryptoKey = (pMVar2->fields).CKHKAPNMEKL.fields.currentCryptoKey;
      local_80.hiddenValue = (pMVar2->fields).CKHKAPNMEKL.fields.hiddenValue;
      fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                         (MethodInfo *)0x0);
      pMVar2 = (__this->fields).IMEDLCCHGNH;
      if (pMVar2 != (MBALPICJBHF_o *)0x0) {
        local_a0.fakeValueActive = (pMVar2->fields).IBBCABGOAMN.fields.fakeValueActive;
        local_a0.inited = (pMVar2->fields).IBBCABGOAMN.fields.inited;
        local_a0._18_2_ = *(undefined2 *)&(pMVar2->fields).IBBCABGOAMN.fields.field_0x12;
        local_a0.hiddenValueOldByte4.fields =
             (pMVar2->fields).IBBCABGOAMN.fields.hiddenValueOldByte4.fields;
        local_a0.fakeValue = (pMVar2->fields).IBBCABGOAMN.fields.fakeValue;
        local_a0.currentCryptoKey = (pMVar2->fields).IBBCABGOAMN.fields.currentCryptoKey;
        local_a0.hiddenValue = (pMVar2->fields).IBBCABGOAMN.fields.hiddenValue;
        fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,
                           (MethodInfo *)0x0);
        fVar6 = Core_Configs_Models_BuildSettingsExtension__EvaluateFrequencyFactor
                          ((Core_Configs_Models_ShakeScreenParamsSettings_o *)settings,
                           (MethodInfo *)0x0);
        pMVar2 = (__this->fields).IMEDLCCHGNH;
        if (pMVar2 != (MBALPICJBHF_o *)0x0) {
          local_c0.fakeValueActive = (pMVar2->fields).JPKGOALFABP.fields.fakeValueActive;
          local_c0.inited = (pMVar2->fields).JPKGOALFABP.fields.inited;
          local_c0._18_2_ = *(undefined2 *)&(pMVar2->fields).JPKGOALFABP.fields.field_0x12;
          local_c0.hiddenValueOldByte4.fields =
               (pMVar2->fields).JPKGOALFABP.fields.hiddenValueOldByte4.fields;
          local_c0.fakeValue = (pMVar2->fields).JPKGOALFABP.fields.fakeValue;
          local_c0.currentCryptoKey = (pMVar2->fields).JPKGOALFABP.fields.currentCryptoKey;
          local_c0.hiddenValue = (pMVar2->fields).JPKGOALFABP.fields.hiddenValue;
          fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,
                             (MethodInfo *)0x0);
          pMVar2 = (__this->fields).IMEDLCCHGNH;
          if (pMVar2 != (MBALPICJBHF_o *)0x0) {
            local_e0.fakeValueActive = (pMVar2->fields).LGABGEDDHDO.fields.fakeValueActive;
            local_e0.inited = (pMVar2->fields).LGABGEDDHDO.fields.inited;
            local_e0._18_2_ = *(undefined2 *)&(pMVar2->fields).LGABGEDDHDO.fields.field_0x12;
            local_e0.hiddenValueOldByte4.fields =
                 (pMVar2->fields).LGABGEDDHDO.fields.hiddenValueOldByte4.fields;
            local_e0.fakeValue = (pMVar2->fields).LGABGEDDHDO.fields.fakeValue;
            local_e0.currentCryptoKey = (pMVar2->fields).LGABGEDDHDO.fields.currentCryptoKey;
            local_e0.hiddenValue = (pMVar2->fields).LGABGEDDHDO.fields.hiddenValue;
            fVar10 = fVar9 - fVar10;
            fVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_e0,
                               (MethodInfo *)0x0);
            fVar7 = sinf(fVar10 * fVar6 * fVar7);
            fVar6 = sinf(fVar10 * fVar6 * fVar8);
            if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = (__this->fields).LIICCFBEOLC;
            if (__this_00 != (Render_o *)0x0) {
              fVar8 = EOAOCPLIKOI_TypeInfo->static_fields->IBOAGHOHNIN;
              Render__AJFICHLKOBO
                        (__this_00,(((fVar9 - fVar10) * fVar3 * fVar4 * fVar7) / fVar9) * fVar8,
                         (((fVar9 - fVar10) * fVar3 * fVar5 * fVar6) / fVar9) * fVar8,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JIIGHMEMOLL()  [RVA 0x3189AFC]
// Camera$$JIIGHMEMOLL @ RVA 0x3189AFC

void Camera__JIIGHMEMOLL(Camera_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  GameUtils_FNHCJBGGHLH_o *pMVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((__this->fields).DLEANEAEAFF != false) {
    pMVar3 = (__this->fields).FGINMCCJOLH;
    if (pMVar3 == (GameUtils_FNHCJBGGHLH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pMVar3->fields).EOOHODKJDHH;
    iVar2 = (pMVar3->fields).ELDLAOMMHEJ;
    fVar6 = (pMVar3->fields).GHIDOLCAFAE;
    fVar4 = (pMVar3->fields).NMBDLKFCIPG;
    fVar5 = (pMVar3->fields).INNAIENKFPP;
    fVar7 = (float)iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    fVar7 = ABS(fVar4 - fVar5) / (fVar7 * 0.5);
    if (iVar1 >> 1 < iVar2) {
      fVar6 = fVar6 + fVar7;
      (pMVar3->fields).GHIDOLCAFAE = fVar6;
      if (fVar5 < fVar6) {
        (pMVar3->fields).GHIDOLCAFAE = fVar5;
      }
    }
    else {
      fVar6 = fVar6 - fVar7;
      (pMVar3->fields).GHIDOLCAFAE = fVar6;
      if (fVar6 < fVar4) {
        (pMVar3->fields).GHIDOLCAFAE = fVar4;
      }
    }
    (pMVar3->fields).ELDLAOMMHEJ = iVar2 + 1;
  }
  return;
}


// ===== public void MCEBBHDMEAE(int DPJIDNBJIBG)  [RVA 0x3189838]
// Camera$$MCEBBHDMEAE @ RVA 0x3189838

void Camera__MCEBBHDMEAE(Camera_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  Render_o *pMVar1;
  PKNBJJPHAKI_o *__this_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  Model_o *BCKBBGCOMJD;
  
  if ((DAT_04566a03 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Item__);
    DAT_04566a03 = 1;
  }
  pMVar1 = (__this->fields).LIICCFBEOLC;
  if ((pMVar1 != (Render_o *)0x0) &&
     (__this_00 = Render__KLOHNEKNDBL(pMVar1,(MethodInfo *)0x0),
     __this_00 != (PKNBJJPHAKI_o *)0x0)) {
    PKNBJJPHAKI__HMDJFLDLPMN(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).EHJHKEEDKBE;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      pMVar1 = (__this->fields).LIICCFBEOLC;
      BCKBBGCOMJD = (Model_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                               Method_System_Collections_Generic_List<Model>_get_Item__);
      if (pMVar1 != (Render_o *)0x0) {
        Render__BALEGGJGENM(pMVar1,BCKBBGCOMJD,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EHJHKEEDKBE;
        if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                     Method_System_Collections_Generic_List<Model>_RemoveAt__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PreFight PKHIKPFHPDJ()  [RVA 0x3189B80]
// Camera$$PKHIKPFHPDJ @ RVA 0x3189B80

Nekki_SF2_GUI_Fight_PreFight_o * Camera__PKHIKPFHPDJ(Camera_o *__this,MethodInfo *method)

{
  return (__this->fields).FLJPPMKLBLJ;
}


// ===== public void PFKJADDMBGC(PreFight CJNHFNHJHPE)  [RVA 0x3189B88]
// Camera$$PFKJADDMBGC @ RVA 0x3189B88

void Camera__PFKJADDMBGC
               (Camera_o *__this,Nekki_SF2_GUI_Fight_PreFight_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  (__this->fields).FLJPPMKLBLJ = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void EDKFALNMGAN()  [RVA 0x3189B90]
// Camera$$EDKFALNMGAN @ RVA 0x3189B90

void Camera__EDKFALNMGAN(Camera_o *__this,MethodInfo *method)

{
  Render_o *__this_00;
  
  __this_00 = (__this->fields).LIICCFBEOLC;
  if (__this_00 != (Render_o *)0x0) {
    Render__JGOJAPFCIHI(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(Transform JJHEGPBBMLG)  [RVA 0x3189BAC]
// Camera$$.ctor @ RVA 0x3189BAC

void Camera___ctor(Camera_o *__this,UnityEngine_Transform_o *JJHEGPBBMLG,
                       MethodInfo *method)

{
  Camera_HKFNKBEOOHP_o *__this_00;
  Camera_HKFNKBEOOHP_o **ppBVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar2;
  Vector3f_o *pCVar3;
  Vector3f_o **ppCVar4;
  ModelNode_o *pIVar5;
  ModelNode_o **ppIVar6;
  Render_o **ppMVar7;
  Nekki_SF2_GUI_Fight_PreFight_o **ppNVar8;
  Location_o **ppNVar9;
  MBALPICJBHF_o **ppMVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04566a04 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Camera_HKFNKBEOOHP_TypeInfo);
    FUN_01bab630(&ModelNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Model>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&StringLiteral_3772/*"Camera"*/);
    FUN_01bab630(&StringLiteral_10362/*"Position"*/);
    DAT_04566a04 = 1;
  }
  auVar11 = thunk_FUN_01bda818(Camera_HKFNKBEOOHP_TypeInfo);
  __this_00 = auVar11._0_8_;
  Camera_HKFNKBEOOHP___ctor(__this_00,auVar11._8_8_);
  ppBVar1 = &(__this->fields).AGIAJGHBKAF;
  *ppBVar1 = __this_00;
  thunk_FUN_01c20e04(ppBVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Model>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<Model>__ctor__);
  ppSVar2 = &(__this->fields).EHJHKEEDKBE;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).DHAPNCKKICJ;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).IOPCKIEMPHD;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).GFMPHKPDJJN;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).MOLFEKODIID;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).LKHLLEPLJBG;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).ALAOMPHGJNN;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
                    /* try { // try from 03289dac to 03389edf has its CatchHandler @ 03289dac
                       catch() { ... } // from try @ 03289dac with catch @ 03289dac
                       catch() { ... } // from try @ 0328a074 with catch @ 03289dac
                       catch() { ... } // from try @ 0328a0a4 with catch @ 03289dac
                       catch() { ... } // from try @ 0328a120 with catch @ 03289dac
                       catch() { ... } // from try @ 0328a164 with catch @ 03289dac
                       catch() { ... } // from try @ 0328a198 with catch @ 03289dac */
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).KMAFCAIIJFD;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).MHPJFNKKGLC;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).FKPMDCMCOFH;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  pCVar3 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar3,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).NOKKLPJCCML;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  Camera__LLENHOPMLBH(__this,JJHEGPBBMLG,method);
  pIVar5 = (ModelNode_o *)thunk_FUN_01bda818(ModelNode_TypeInfo);
  ModelNode___ctor(pIVar5,StringLiteral_3772/*"Camera"*/,(MethodInfo *)0x0);
  ppIVar6 = &(__this->fields).NHAIFIDONLG;
  *ppIVar6 = pIVar5;
  thunk_FUN_01c20e04(ppIVar6,pIVar5);
  pIVar5 = (ModelNode_o *)thunk_FUN_01bda818(ModelNode_TypeInfo);
  ModelNode___ctor(pIVar5,StringLiteral_10362/*"Position"*/,(MethodInfo *)0x0);
  ppIVar6 = &(__this->fields).PHILCIHBBCB;
  *ppIVar6 = pIVar5;
  thunk_FUN_01c20e04(ppIVar6,pIVar5);
  ppMVar7 = &(__this->fields).LIICCFBEOLC;
  *ppMVar7 = (Render_o *)0x0;
  thunk_FUN_01c20e04(ppMVar7,0);
  ppNVar8 = &(__this->fields).FLJPPMKLBLJ;
  *ppNVar8 = (Nekki_SF2_GUI_Fight_PreFight_o *)0x0;
  thunk_FUN_01c20e04(ppNVar8,0);
  ppNVar9 = &(__this->fields).CNHHLPPHNCO;
  *ppNVar9 = (Location_o *)0x0;
  thunk_FUN_01c20e04(ppNVar9,0);
  ppIVar6 = &(__this->fields).AGPJBDPFKDI;
  *ppIVar6 = (ModelNode_o *)0x0;
  thunk_FUN_01c20e04(ppIVar6,0);
  ppIVar6 = &(__this->fields).KKLAPLADFIG;
  *ppIVar6 = (ModelNode_o *)0x0;
                    /* try { // try from 03289ee0 to 03389ee7 has its CatchHandler @ 0328a14c */
  thunk_FUN_01c20e04(ppIVar6,0);
  ppMVar10 = &(__this->fields).IMEDLCCHGNH;
  *ppMVar10 = (MBALPICJBHF_o *)0x0;
  (__this->fields).MHNMALPDJFL = false;
  (__this->fields).NLIBJEPHLNK = 0.0;
  (__this->fields).ANNBPCDGAHJ = false;
  (__this->fields).CDCDGKDNDAL = 0.0;
  (__this->fields).OLFPNIHIDIN = 0.0;
  thunk_FUN_01c20e04(ppMVar10,0);
                    /* try { // try from 03289f08 to 03389f0f has its CatchHandler @ 0328a134 */
  (__this->fields).OFPNGACGGLK = 0;
  (__this->fields).FDGNLPLKNGK = false;
  (__this->fields).LDPMIHNLHFE = true;
                    /* try { // try from 03289f24 to 03389f2b has its CatchHandler @ 0328a090 */
  return;
}


// ===== public void JFHCEDEEBHF(Vector3f EKEMKOCPHPO, Vector3f MJNAHMEKOLE, int DFIBGGDJPLM = 4)  [RVA 0x318A094]
// Camera$$JFHCEDEEBHF @ RVA 0x318A094

void Camera__JFHCEDEEBHF
               (Camera_o *__this,Vector3f_o *EKEMKOCPHPO,Vector3f_o *MJNAHMEKOLE,
               int32_t DFIBGGDJPLM,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  Camera_HKFNKBEOOHP_o *pBVar2;
  
  pBVar2 = (__this->fields).AGIAJGHBKAF;
                    /* try { // try from 0328a0a0 to 0338a0a3 has its CatchHandler @ 0328a124 */
                    /* try { // try from 0328a0a4 to 0338a0e7 has its CatchHandler @ 03289dac */
  if ((pBVar2 != (Camera_HKFNKBEOOHP_o *)0x0) &&
     (pCVar1 = (pBVar2->fields).EKEMKOCPHPO, pCVar1 != (Vector3f_o *)0x0)) {
    Vector3f__FOOHBJNHOKK(pCVar1,EKEMKOCPHPO,(MethodInfo *)0x0);
    pBVar2 = (__this->fields).AGIAJGHBKAF;
    if ((pBVar2 != (Camera_HKFNKBEOOHP_o *)0x0) &&
       (pCVar1 = (pBVar2->fields).MJNAHMEKOLE, pCVar1 != (Vector3f_o *)0x0)) {
      Vector3f__FOOHBJNHOKK(pCVar1,MJNAHMEKOLE,(MethodInfo *)0x0);
      pBVar2 = (__this->fields).AGIAJGHBKAF;
      if (pBVar2 != (Camera_HKFNKBEOOHP_o *)0x0) {
        (pBVar2->fields).DFIBGGDJPLM = DFIBGGDJPLM;
                    /* try { // try from 0328a0e8 to 0338a103 has its CatchHandler @ 0328a1ac */
        (pBVar2->fields).OPNIEBGMEPI = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LLENHOPMLBH(Transform JJHEGPBBMLG)  [RVA 0x3189FC0]
// Camera$$LLENHOPMLBH @ RVA 0x3189FC0

void Camera__LLENHOPMLBH
               (Camera_o *__this,UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  
                    /* try { // try from 03289fe0 to 03389fe7 has its CatchHandler @ 0328a138 */
  if ((DAT_04566a05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_3772/*"Camera"*/);
    DAT_04566a05 = 1;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_3772/*"Camera"*/,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).LDAKOINICNJ;
  *ppUVar2 = __this_00;
  thunk_FUN_01c20e04(ppUVar2,__this_00);
                    /* try { // try from 0328a038 to 0338a05b has its CatchHandler @ 0328a130 */
  if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar1,JJHEGPBBMLG,false,(MethodInfo *)0x0);
                    /* try { // try from 0328a060 to 0338a063 has its CatchHandler @ 0328a088 */
                    /* try { // try from 0328a068 to 0338a06b has its CatchHandler @ 0328a084 */
    if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 0328a070 to 0338a073 has its CatchHandler @ 0328a07c */
                    /* try { // try from 0328a074 to 0338a09f has its CatchHandler @ 03289dac */
                    /* catch() { ... } // from try @ 03289f64 with catch @ 0328a078 */
                    /* catch() { ... } // from try @ 0328a070 with catch @ 0328a07c */
                    /* catch() { ... } // from try @ 03289fac with catch @ 0328a080 */
                    /* catch() { ... } // from try @ 0328a068 with catch @ 0328a084 */
                    /* catch() { ... } // from try @ 0328a060 with catch @ 0328a088 */
                    /* catch() { ... } // from try @ 03289f38 with catch @ 0328a08c */
      UnityEngine_Transform__set_localPosition
                (pUVar1,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03289f24 with catch @ 0328a090 */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x318A100]
// Camera$$RandomizeObscuredVars @ RVA 0x318A100

void Camera__RandomizeObscuredVars(Camera_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  MBALPICJBHF_o *__this_00;
  
                    /* try { // try from 0328a104 to 0338a10b has its CatchHandler @ 0328a148 */
  pIVar1 = (__this->fields).NHAIFIDONLG;
                    /* try { // try from 0328a10c to 0338a10f has its CatchHandler @ 0328a144 */
  if (pIVar1 != (ModelNode_o *)0x0) {
                    /* try { // try from 0328a110 to 0338a113 has its CatchHandler @ 0328a140 */
                    /* try { // try from 0328a114 to 0338a117 has its CatchHandler @ 0328a13c */
    ModelNode__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
  }
                    /* try { // try from 0328a118 to 0338a11f has its CatchHandler @ 0328a150 */
  pIVar1 = (__this->fields).PHILCIHBBCB;
  if (pIVar1 != (ModelNode_o *)0x0) {
                    /* try { // try from 0328a120 to 0338a15f has its CatchHandler @ 03289dac */
                    /* catch() { ... } // from try @ 0328a0a0 with catch @ 0328a124 */
    ModelNode__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
  }
  pIVar1 = (__this->fields).AGPJBDPFKDI;
  if (pIVar1 != (ModelNode_o *)0x0) {
                    /* catch() { ... } // from try @ 0328a038 with catch @ 0328a130 */
                    /* catch() { ... } // from try @ 03289f08 with catch @ 0328a134 */
    ModelNode__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 03289fe0 with catch @ 0328a138 */
  pIVar1 = (__this->fields).KKLAPLADFIG;
                    /* catch() { ... } // from try @ 0328a114 with catch @ 0328a13c */
  if (pIVar1 != (ModelNode_o *)0x0) {
                    /* catch() { ... } // from try @ 0328a110 with catch @ 0328a140 */
                    /* catch() { ... } // from try @ 0328a10c with catch @ 0328a144 */
    ModelNode__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 0328a104 with catch @ 0328a148 */
  __this_00 = (__this->fields).IMEDLCCHGNH;
                    /* catch() { ... } // from try @ 03289ee0 with catch @ 0328a14c */
  if (__this_00 != (MBALPICJBHF_o *)0x0) {
                    /* catch() { ... } // from try @ 0328a118 with catch @ 0328a150 */
    MBALPICJBHF__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 0328a160 to 0338a163 has its CatchHandler @ 0328a188 */
  return;
}


// ===== public void IDLMOCPNNCH(Vector3f CJNHFNHJHPE)  [RVA 0x318A164]
// Camera$$IDLMOCPNNCH @ RVA 0x318A164

void Camera__IDLMOCPNNCH(Camera_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  ModelNode_o *__this_00;
  
                    /* try { // try from 0328a164 to 0338a18f has its CatchHandler @ 03289dac */
  __this_00 = (__this->fields).NHAIFIDONLG;
  if (__this_00 != (ModelNode_o *)0x0) {
    ModelNode__AGOEHONIGBH(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHKGCFAMPHL()  [RVA 0x318A180]
// Camera$$BHKGCFAMPHL @ RVA 0x318A180

void Camera__BHKGCFAMPHL(Camera_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  Vector3f_o *pCVar2;
  Vector3f_o *pCVar3;
  Vector3f_o *pCVar4;
  Vector3f_o *pCVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 0328a160 with catch @ 0328a188 */
  if ((__this->fields).LDPMIHNLHFE == false) {
    return;
  }
                    /* try { // try from 0328a190 to 0338a197 has its CatchHandler @ 0328a1ac */
  pIVar1 = (__this->fields).PHILCIHBBCB;
  if (pIVar1 != (ModelNode_o *)0x0) {
                    /* try { // try from 0328a198 to 0338a1a3 has its CatchHandler @ 03289dac */
    ModelNode__IPLOAGNCEHJ(pIVar1,0.0,(MethodInfo *)0x0);
                    /* try { // try from 0328a1a4 to 0338a1ab has its CatchHandler @ 0328a1ac */
    pIVar1 = (__this->fields).NHAIFIDONLG;
                    /* catch() { ... } // from try @ 0328a0e8 with catch @ 0328a1ac
                       catch() { ... } // from try @ 0328a190 with catch @ 0328a1ac
                       catch() { ... } // from try @ 0328a1a4 with catch @ 0328a1ac */
    if ((pIVar1 != (ModelNode_o *)0x0) &&
       (pCVar2 = (__this->fields).DHAPNCKKICJ, pCVar2 != (Vector3f_o *)0x0)) {
      Vector3f__FOOHBJNHOKK(pCVar2,(pIVar1->fields).BJKKHONDAKP,(MethodInfo *)0x0);
      pIVar1 = (__this->fields).NHAIFIDONLG;
      if ((pIVar1 != (ModelNode_o *)0x0) &&
         (pCVar2 = (__this->fields).IOPCKIEMPHD, pCVar2 != (Vector3f_o *)0x0)) {
        Vector3f__FOOHBJNHOKK(pCVar2,(pIVar1->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
        pIVar1 = (__this->fields).PHILCIHBBCB;
        if ((pIVar1 != (ModelNode_o *)0x0) &&
           (pCVar2 = (__this->fields).GFMPHKPDJJN, pCVar2 != (Vector3f_o *)0x0)) {
          Vector3f__FOOHBJNHOKK(pCVar2,(pIVar1->fields).BJKKHONDAKP,(MethodInfo *)0x0);
          pIVar1 = (__this->fields).PHILCIHBBCB;
          if ((pIVar1 != (ModelNode_o *)0x0) &&
             (pCVar2 = (__this->fields).MOLFEKODIID, pCVar2 != (Vector3f_o *)0x0)) {
            Vector3f__FOOHBJNHOKK(pCVar2,(pIVar1->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).MOLFEKODIID;
            if (pCVar2 != (Vector3f_o *)0x0) {
              pCVar5 = (__this->fields).IOPCKIEMPHD;
              pCVar3 = (__this->fields).GFMPHKPDJJN;
              pCVar4 = (__this->fields).DHAPNCKKICJ;
              (pCVar2->fields).PPOPAMHBMGG = 0.0;
              if (((pCVar3 != (Vector3f_o *)0x0) &&
                  ((pCVar3->fields).PPOPAMHBMGG = 0.0, pCVar5 != (Vector3f_o *)0x0)) &&
                 ((pCVar5->fields).PPOPAMHBMGG = 0.0, pCVar4 != (Vector3f_o *)0x0)) {
                (pCVar4->fields).PPOPAMHBMGG = 0.0;
                pCVar2 = (__this->fields).LKHLLEPLJBG;
                if (pCVar2 != (Vector3f_o *)0x0) {
                  Vector3f__FOOHBJNHOKK
                            (pCVar2,(pCVar5->fields).super.OHHDBINAJCB -
                                    (pCVar4->fields).super.OHHDBINAJCB,
                             (pCVar5->fields).super.JOLEIODMLFL - (pCVar4->fields).super.JOLEIODMLFL
                             ,(pCVar5->fields).PPOPAMHBMGG,(MethodInfo *)0x0);
                  pCVar2 = (__this->fields).GFMPHKPDJJN;
                  if (((pCVar2 != (Vector3f_o *)0x0) &&
                      (pCVar5 = (__this->fields).LKHLLEPLJBG, pCVar5 != (Vector3f_o *)0x0)) &&
                     (pCVar3 = (__this->fields).ALAOMPHGJNN, pCVar3 != (Vector3f_o *)0x0)) {
                    Vector3f__FOOHBJNHOKK
                              (pCVar3,(pCVar2->fields).super.OHHDBINAJCB +
                                      (pCVar5->fields).super.OHHDBINAJCB,
                               (pCVar5->fields).super.JOLEIODMLFL +
                               (pCVar2->fields).super.JOLEIODMLFL,
                               (pCVar5->fields).PPOPAMHBMGG + (pCVar2->fields).PPOPAMHBMGG,
                               (MethodInfo *)0x0);
                    pCVar2 = (__this->fields).ALAOMPHGJNN;
                    if (((pCVar2 != (Vector3f_o *)0x0) &&
                        (pCVar5 = (__this->fields).MOLFEKODIID, pCVar5 != (Vector3f_o *)0x0)) &&
                       (pCVar3 = (__this->fields).KMAFCAIIJFD, pCVar3 != (Vector3f_o *)0x0)) {
                      Vector3f__FOOHBJNHOKK
                                (pCVar3,(pCVar2->fields).super.OHHDBINAJCB -
                                        (pCVar5->fields).super.OHHDBINAJCB,
                                 (pCVar2->fields).super.JOLEIODMLFL -
                                 (pCVar5->fields).super.JOLEIODMLFL,
                                 (pCVar2->fields).PPOPAMHBMGG - (pCVar5->fields).PPOPAMHBMGG,
                                 (MethodInfo *)0x0);
                      pCVar2 = (__this->fields).IOPCKIEMPHD;
                      if (((pCVar2 != (Vector3f_o *)0x0) &&
                          (pCVar5 = (__this->fields).MOLFEKODIID, pCVar5 != (Vector3f_o *)0x0))
                         && (pCVar3 = (__this->fields).MHPJFNKKGLC, pCVar3 != (Vector3f_o *)0x0))
                      {
                        Vector3f__FOOHBJNHOKK
                                  (pCVar3,(pCVar2->fields).super.OHHDBINAJCB -
                                          (pCVar5->fields).super.OHHDBINAJCB,
                                   (pCVar2->fields).super.JOLEIODMLFL -
                                   (pCVar5->fields).super.JOLEIODMLFL,
                                   (pCVar2->fields).PPOPAMHBMGG - (pCVar5->fields).PPOPAMHBMGG,
                                   (MethodInfo *)0x0);
                        pCVar2 = (__this->fields).MHPJFNKKGLC;
                        if (pCVar2 != (Vector3f_o *)0x0) {
                          Vector3f__PGLILPKGILI(pCVar2,0.15,(MethodInfo *)0x0);
                          pCVar2 = (__this->fields).KMAFCAIIJFD;
                          if (((pCVar2 != (Vector3f_o *)0x0) &&
                              (pCVar5 = (__this->fields).MHPJFNKKGLC, pCVar5 != (Vector3f_o *)0x0
                              )) && (pCVar3 = (__this->fields).FKPMDCMCOFH,
                                    pCVar3 != (Vector3f_o *)0x0)) {
                            Vector3f__FOOHBJNHOKK
                                      (pCVar3,(pCVar2->fields).super.OHHDBINAJCB +
                                              (pCVar5->fields).super.OHHDBINAJCB,
                                       (pCVar5->fields).super.JOLEIODMLFL +
                                       (pCVar2->fields).super.JOLEIODMLFL,
                                       (pCVar5->fields).PPOPAMHBMGG + (pCVar2->fields).PPOPAMHBMGG,
                                       (MethodInfo *)0x0);
                            pCVar2 = (__this->fields).FKPMDCMCOFH;
                            if (pCVar2 != (Vector3f_o *)0x0) {
                              fVar6 = Vector3f__HKDIEEHOAMC(pCVar2,(MethodInfo *)0x0);
                              if (200.0 < fVar6) {
                                pCVar2 = (__this->fields).FKPMDCMCOFH;
                                if (pCVar2 == (Vector3f_o *)0x0) goto LAB_0328a49c;
                                Vector3f__IMINLGEKHIH(pCVar2,(MethodInfo *)0x0);
                                pCVar2 = (__this->fields).FKPMDCMCOFH;
                                if (pCVar2 == (Vector3f_o *)0x0) goto LAB_0328a49c;
                                Vector3f__PGLILPKGILI(pCVar2,200.0,(MethodInfo *)0x0);
                              }
                              pCVar2 = (__this->fields).MOLFEKODIID;
                              if (pCVar2 != (Vector3f_o *)0x0) {
                                Vector3f__LFENGGKOJDO
                                          (pCVar2,(__this->fields).FKPMDCMCOFH,(MethodInfo *)0x0);
                                pCVar2 = (__this->fields).MOLFEKODIID;
                                if (((pCVar2 != (Vector3f_o *)0x0) &&
                                    (pCVar5 = (__this->fields).GFMPHKPDJJN,
                                    pCVar5 != (Vector3f_o *)0x0)) &&
                                   (pCVar3 = (__this->fields).NOKKLPJCCML,
                                   pCVar3 != (Vector3f_o *)0x0)) {
                                  Vector3f__FOOHBJNHOKK
                                            (pCVar3,(pCVar2->fields).super.OHHDBINAJCB -
                                                    (pCVar5->fields).super.OHHDBINAJCB,
                                             (pCVar2->fields).super.JOLEIODMLFL -
                                             (pCVar5->fields).super.JOLEIODMLFL,
                                             (pCVar2->fields).PPOPAMHBMGG -
                                             (pCVar5->fields).PPOPAMHBMGG,(MethodInfo *)0x0);
                                  pCVar2 = (__this->fields).NOKKLPJCCML;
                                  if (pCVar2 != (Vector3f_o *)0x0) {
                                    fVar6 = Vector3f__HKDIEEHOAMC(pCVar2,(MethodInfo *)0x0);
                                    if (50.0 < fVar6) {
                                      pCVar2 = (__this->fields).NOKKLPJCCML;
                                      if (pCVar2 == (Vector3f_o *)0x0) goto LAB_0328a49c;
                                      Vector3f__PGLILPKGILI
                                                (pCVar2,50.0 / fVar6,(MethodInfo *)0x0);
                                      pCVar2 = (__this->fields).GFMPHKPDJJN;
                                      if (((pCVar2 == (Vector3f_o *)0x0) ||
                                          (pCVar5 = (__this->fields).NOKKLPJCCML,
                                          pCVar5 == (Vector3f_o *)0x0)) ||
                                         (pCVar3 = (__this->fields).MOLFEKODIID,
                                         pCVar3 == (Vector3f_o *)0x0)) goto LAB_0328a49c;
                                      Vector3f__FOOHBJNHOKK
                                                (pCVar3,(pCVar2->fields).super.OHHDBINAJCB +
                                                        (pCVar5->fields).super.OHHDBINAJCB,
                                                 (pCVar5->fields).super.JOLEIODMLFL +
                                                 (pCVar2->fields).super.JOLEIODMLFL,
                                                 (pCVar5->fields).PPOPAMHBMGG +
                                                 (pCVar2->fields).PPOPAMHBMGG,(MethodInfo *)0x0);
                                    }
                                    pIVar1 = (__this->fields).PHILCIHBBCB;
                                    if (pIVar1 != (ModelNode_o *)0x0) {
                                      ModelNode__AGOEHONIGBH
                                                (pIVar1,(__this->fields).MOLFEKODIID,
                                                 (MethodInfo *)0x0);
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
LAB_0328a49c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Render BDOMLLIHEBH()  [RVA 0x318A4A0]
// Camera$$BDOMLLIHEBH @ RVA 0x318A4A0

Render_o * Camera__BDOMLLIHEBH(Camera_o *__this,MethodInfo *method)

{
  return (__this->fields).LIICCFBEOLC;
}


// ===== private void IPDEBHOMAIB()  [RVA 0x318A4A8]
// Camera$$IPDEBHOMAIB @ RVA 0x318A4A8

void Camera__IPDEBHOMAIB(Camera_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  Render_o *pMVar2;
  PKNBJJPHAKI_o *pPVar3;
  Vector3f_o *CJNHFNHJHPE;
  ModelObject_o *IHEPHBIPLPM;
  ModelObject_o *FMPJLBLNHMC;
  
  pIVar1 = (__this->fields).NHAIFIDONLG;
  if (pIVar1 != (ModelNode_o *)0x0) {
    ModelNode__CFAAJCOBAEE(pIVar1,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).LIICCFBEOLC;
    if (((pMVar2 != (Render_o *)0x0) &&
        (pPVar3 = Render__KLOHNEKNDBL(pMVar2,(MethodInfo *)0x0), pPVar3 != (PKNBJJPHAKI_o *)0x0
        )) && (pMVar2 = (__this->fields).LIICCFBEOLC, pMVar2 != (Render_o *)0x0)) {
      FMPJLBLNHMC = (pPVar3->fields).JBPKNAKOHLP;
      pPVar3 = Render__KLOHNEKNDBL(pMVar2,(MethodInfo *)0x0);
      if (pPVar3 != (PKNBJJPHAKI_o *)0x0) {
        if ((FMPJLBLNHMC == (ModelObject_o *)0x0) ||
           (IHEPHBIPLPM = (pPVar3->fields).AAJIHJPLHDA, IHEPHBIPLPM == (ModelObject_o *)0x0)) {
          return;
        }
        pIVar1 = (__this->fields).NHAIFIDONLG;
        CJNHFNHJHPE = Model__NKPGIFLCKBC(FMPJLBLNHMC,IHEPHBIPLPM,(MethodInfo *)0x0);
        if (pIVar1 != (ModelNode_o *)0x0) {
          ModelNode__AGOEHONIGBH(pIVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x318A53C]
// Camera$$NDNPGAKJLHM @ RVA 0x318A53C

void Camera__NDNPGAKJLHM(Camera_o *__this,MethodInfo *method)

{
  Render_o **ppMVar1;
  
  ppMVar1 = &(__this->fields).LIICCFBEOLC;
  if (*ppMVar1 != (Render_o *)0x0) {
    Render__NDNPGAKJLHM(*ppMVar1,(MethodInfo *)0x0);
    *ppMVar1 = (Render_o *)0x0;
    thunk_FUN_01c20e04(ppMVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int OCJCMHLABBF(Model BCKBBGCOMJD, bool FOFCAILEKJD, bool PMIAIAOKFND, bool HOACFPMHAFP = False)  [RVA 0x318A56C]
// Camera$$OCJCMHLABBF @ RVA 0x318A56C

int32_t Camera__OCJCMHLABBF
                  (Camera_o *__this,Model_o *BCKBBGCOMJD,bool FOFCAILEKJD,
                  bool PMIAIAOKFND,bool HOACFPMHAFP,MethodInfo *method)

{
  long lVar1;
  ModelNode_o **ppIVar2;
  uint uVar3;
  int32_t iVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  Render_o *pMVar5;
  ModelNode_o *pIVar6;
  Model_array *pOVar7;
  GameUtils_CEMCIPLHMKD_o *pMVar8;
  Location_o *pNVar9;
  ModelObject_o *__this_01;
  
  if ((DAT_04566a06 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_Add__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566a06 = 1;
  }
  lVar1 = Method_System_Collections_Generic_List<Model>_Add__;
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar7 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar7 != (Model_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pOVar7->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pOVar7->m_Items[(int)uVar3] = BCKBBGCOMJD;
        thunk_FUN_01c20e04(pOVar7->m_Items + (int)uVar3,BCKBBGCOMJD);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)BCKBBGCOMJD,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
      pMVar5 = (__this->fields).LIICCFBEOLC;
      if (pMVar5 != (Render_o *)0x0) {
        Render__DFLHLNGDGEP(pMVar5,BCKBBGCOMJD,(MethodInfo *)0x0);
        if (HOACFPMHAFP) {
          if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0328a730;
          __this_01 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04566ab3 == '\0') {
            FUN_01bab630(&GameUtils_TypeInfo);
            DAT_04566ab3 = '\x01';
          }
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = GameUtils_TypeInfo->static_fields->EBNPOGPNMGH;
          if ((pMVar8 == (GameUtils_CEMCIPLHMKD_o *)0x0) || (__this_01 == (ModelObject_o *)0x0))
          goto LAB_0328a730;
          pIVar6 = ModelObject__OCJAHBKIFNO
                             (__this_01,(pMVar8->fields).IDMFMJHDAFI,(MethodInfo *)0x0);
          lVar1 = 0x58;
          ppIVar2 = &(__this->fields).AGPJBDPFKDI;
          if (!FOFCAILEKJD) {
            lVar1 = 0x60;
            ppIVar2 = &(__this->fields).KKLAPLADFIG;
          }
          *(ModelNode_o **)((long)&__this->klass + lVar1) = pIVar6;
          thunk_FUN_01c20e04(ppIVar2);
        }
        pMVar5 = (__this->fields).LIICCFBEOLC;
        if (pMVar5 == (Render_o *)0x0) {
          return -1;
        }
        if ((BCKBBGCOMJD != (Model_o *)0x0) &&
           (pNVar9 = (__this->fields).CNHHLPPHNCO, pNVar9 != (Location_o *)0x0)) {
          iVar4 = Render__FBFNFBPFHEI
                            (pMVar5,(BCKBBGCOMJD->fields).HMIAFJALFCJ,
                             (UnityEngine_Color_o)(pNVar9->fields).GLECOLINCIH.fields,PMIAIAOKFND,
                             (MethodInfo *)0x0);
          return iVar4;
        }
      }
    }
  }
LAB_0328a730:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDHAMOEKNNK()  [RVA 0x318A734]
// Camera$$BDHAMOEKNNK @ RVA 0x318A734

void Camera__BDHAMOEKNNK(Camera_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566a07 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Model>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    DAT_04566a07 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).FDGNLPLKNGK != false) {
    __this_00 = (__this->fields).EHJHKEEDKBE;
    if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Model>_GetEnumerator__);
    bVar1 = true;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<Model>_MoveNext__
                             ), bVar2) {
      if ((Model_o *)local_48.fields._current == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = Model__MKIHMHHJLHE((Model_o *)local_48.fields._current,(MethodInfo *)0x0);
      bVar1 = (bool)(bVar1 & iVar3 != -1);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<Model>_Dispose__);
    method = method_00;
    if (bVar1) {
      Camera__LCBBHACMOJN(__this,method_00);
      (__this->fields).FDGNLPLKNGK = false;
      method = extraout_x1_00;
    }
  }
  if ((__this->fields).LDPMIHNLHFE != false) {
    Camera__OPDIEGGCJAL(__this,method);
    Camera__IPDEBHOMAIB(__this,method_01);
    Camera__BHKGCFAMPHL(__this,method_02);
    Camera__FIJNILNOFCD(__this,method_03);
    Camera__DPDGNBFJJNC(__this,method_04);
    Camera__JIIGHMEMOLL(__this,method_05);
  }
  return;
}


// ===== public void FNKPNLPLDLI(GameUtils.FNHCJBGGHLH OOHHJAFGPII)  [RVA 0x318A8E8]
// Camera$$FNKPNLPLDLI @ RVA 0x318A8E8

void Camera__FNKPNLPLDLI
               (Camera_o *__this,GameUtils_FNHCJBGGHLH_o *OOHHJAFGPII,MethodInfo *method)

{
  Render_o *pMVar1;
  GameUtils_FNHCJBGGHLH_o **ppMVar2;
  GameUtils_FNHCJBGGHLH_o *pMVar3;
  float fVar4;
  
  if (OOHHJAFGPII == (GameUtils_FNHCJBGGHLH_o *)0x0) {
    return;
  }
  ppMVar2 = &(__this->fields).FGINMCCJOLH;
  *ppMVar2 = OOHHJAFGPII;
  (__this->fields).DLEANEAEAFF = true;
  thunk_FUN_01c20e04(ppMVar2);
  pMVar1 = (__this->fields).LIICCFBEOLC;
  if (pMVar1 != (Render_o *)0x0) {
    fVar4 = Render__IIFIHKHDNCM(pMVar1,(MethodInfo *)0x0);
    pMVar3 = *ppMVar2;
    if (pMVar3 != (GameUtils_FNHCJBGGHLH_o *)0x0) {
      if ((pMVar3->fields).NMBDLKFCIPG < fVar4) {
        (pMVar3->fields).NMBDLKFCIPG = fVar4;
      }
      pMVar1 = (__this->fields).LIICCFBEOLC;
      if (pMVar1 != (Render_o *)0x0) {
        fVar4 = Render__EPJCHCHDJCE(pMVar1,(MethodInfo *)0x0);
        (pMVar3->fields).INNAIENKFPP = fVar4;
        pMVar3 = *ppMVar2;
        if (pMVar3 != (GameUtils_FNHCJBGGHLH_o *)0x0) {
          (pMVar3->fields).ELDLAOMMHEJ = 0;
          (pMVar3->fields).GHIDOLCAFAE = (pMVar3->fields).INNAIENKFPP;
          (__this->fields).OFPNGACGGLK = (pMVar3->fields).EOOHODKJDHH;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HFGIELHOBJC(MBALPICJBHF KOIIFKBDEDM)  [RVA 0x318A978]
// Camera$$HFGIELHOBJC @ RVA 0x318A978

void Camera__HFGIELHOBJC(Camera_o *__this,MBALPICJBHF_o *KOIIFKBDEDM,MethodInfo *method)

{
  int32_t iVar1;
  MBALPICJBHF_o *pMVar2;
  MBALPICJBHF_o **ppMVar3;
  
  if ((DAT_04566a08 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566a08 = 1;
  }
  if (KOIIFKBDEDM != (MBALPICJBHF_o *)0x0) {
    ppMVar3 = &(__this->fields).IMEDLCCHGNH;
    *ppMVar3 = KOIIFKBDEDM;
    thunk_FUN_01c20e04(ppMVar3,KOIIFKBDEDM);
    (__this->fields).MHNMALPDJFL = true;
    if (*ppMVar3 != (MBALPICJBHF_o *)0x0) {
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         ((*ppMVar3)->fields).LCLBBHFEHDC.fields,(MethodInfo *)0x0);
      pMVar2 = (__this->fields).IMEDLCCHGNH;
      (__this->fields).NLIBJEPHLNK = (float)iVar1;
      (__this->fields).ANNBPCDGAHJ = true;
      if (pMVar2 != (MBALPICJBHF_o *)0x0) {
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pMVar2->fields).EOOHODKJDHH.fields,(MethodInfo *)0x0);
        pMVar2 = (__this->fields).IMEDLCCHGNH;
        (__this->fields).CDCDGKDNDAL = (float)iVar1;
        if (pMVar2 != (MBALPICJBHF_o *)0x0) {
          iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pMVar2->fields).EOOHODKJDHH.fields,(MethodInfo *)0x0);
          (__this->fields).OLFPNIHIDIN = (float)iVar1;
          OMLLDCIMLBB<object>__CallEvent
                    ((OMLLDCIMLBB_object__o *)__this,0,(Il2CppObject *)0x0,
                     Method_OMLLDCIMLBB<object>_CallEvent__);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

