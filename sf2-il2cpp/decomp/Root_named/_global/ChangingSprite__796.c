// Original name: .ChangingSprite  (obfuscated GMGALNFPLPA)
// TypeDefIndex 796
// Namespace: 
// public class ChangingSprite
// Fields:
//   private bool EPFNMABINOG; // 0x10
//   private ChangingSprite.GNPGFOHLBOJ JDNKKGPNHPB; // 0x14
//   public GameObject OJJAMKDEMJJ; // 0x18
//   private CocosAnimation AKBKJNNOMOD; // 0x20
//   private SpriteRenderer ANFEBGMOGJD; // 0x28
//   public ParticleSystem HGMMHCMHINJ; // 0x30
//   private FKAKHBPABPA CICPBJDCAOD; // 0x38
//   private FKAKHBPABPA OBALFGOMLOL; // 0x40
//   private FKAKHBPABPA OGLDEIPGBAF; // 0x48
//   private FKAKHBPABPA DOEIKBGEBNC; // 0x50
//   private float CMMGIKGFNOF; // 0x58
//   private ChangingSprite.GPAPFODFLNH ENNJLAAEABK; // 0x60
//   private ChangingSprite.GPAPFODFLNH JBPELKEMOCM; // 0x68
//   private float KMMCDBNINOB; // 0x70
//   private float FINDHOOJJII; // 0x74
//   private float OMCMPPFFEHH; // 0x78
//   private float BDGHBAOGJPE; // 0x7C
//   private float KMMKCAMPAHJ; // 0x80
//   private float BDDKEKCPADJ; // 0x84
//   private float GDIIBOGHNOJ; // 0x88
//   private float HFLMCCMEBNP; // 0x8C
//   private float PLABOODCDAJ; // 0x90
//   private float LLIFBKDPNKI; // 0x94
//   private float PDJHCPAFGNH; // 0x98
//   private ChangingSprite MEMMHKLOBKN; // 0xA0
//   private List<ChangingSprite> DOLDMIEIMPL; // 0xA8
//   private bool DJIFHDOPPPE; // 0xB0
//   private bool LMMNFIDBANA; // 0xB1
//   private bool FADPPLIEOGB; // 0xB2
//   private bool DGGFJKAOEGD; // 0xB3

// ===== private void AHEEHKHEBOO(float MJPEMHDHCCJ)  [RVA 0x306C474]
// ChangingSprite$$AHEEHKHEBOO @ RVA 0x306C474

void ChangingSprite__AHEEHKHEBOO(ChangingSprite_o *__this,float MJPEMHDHCCJ,MethodInfo *method)

{
  bool bVar1;
  CocosAnimation_o *__this_00;
  UnityEngine_ParticleSystem_o *__this_01;
  int iVar2;
  UnityEngine_Object_o *x;
  float t;
  
  if ((DAT_04565f3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f3d = 1;
  }
  if ((__this->fields).EPFNMABINOG != false) {
    iVar2 = (__this->fields).JDNKKGPNHPB;
    if (iVar2 == 1) {
      __this_00 = (__this->fields).AKBKJNNOMOD;
      if (__this_00 == (CocosAnimation_o *)0x0) {
LAB_0316c54c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CocosAnimation__LerpAnimation01(__this_00,(__this->fields).KMMCDBNINOB,(MethodInfo *)0x0);
      iVar2 = (__this->fields).JDNKKGPNHPB;
    }
    if (iVar2 == 2) {
      x = (UnityEngine_Object_o *)(__this->fields).HGMMHCMHINJ;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        t = MJPEMHDHCCJ + MJPEMHDHCCJ;
        if (t <= 0.0) {
          t = 0.0;
        }
        iVar2 = 0x96;
        do {
          __this_01 = (__this->fields).HGMMHCMHINJ;
          if (__this_01 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0316c54c;
          UnityEngine_ParticleSystem__Simulate(__this_01,t,(MethodInfo *)0x0);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    (__this->fields).EPFNMABINOG = false;
  }
  return;
}


// ===== public void GFECOLFOILC(float KEFILECBPMF, float BHOOMCEABGH)  [RVA 0x306C550]
// ChangingSprite$$GFECOLFOILC @ RVA 0x306C550

void ChangingSprite__GFECOLFOILC
               (ChangingSprite_o *__this,float KEFILECBPMF,float BHOOMCEABGH,MethodInfo *method)

{
  (__this->fields).BDGHBAOGJPE = KEFILECBPMF;
  (__this->fields).KMMKCAMPAHJ = BHOOMCEABGH;
  return;
}


// ===== public void FHPMJKKELEN(float AINBPAEDKKN, float CJNHFNHJHPE, float GAJONDLDKLI)  [RVA 0x306C558]
// ChangingSprite$$FHPMJKKELEN @ RVA 0x306C558

void ChangingSprite__FHPMJKKELEN
               (ChangingSprite_o *__this,float AINBPAEDKKN,float CJNHFNHJHPE,float GAJONDLDKLI,
               MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).OGLDEIPGBAF;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    if (CJNHFNHJHPE <= 0.0) {
      CJNHFNHJHPE = 0.0;
    }
    if (100.0 < CJNHFNHJHPE) {
      CJNHFNHJHPE = 100.0;
    }
    FKAKHBPABPA__KFAABFCCGHH(__this_00,AINBPAEDKKN,CJNHFNHJHPE,GAJONDLDKLI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float FLKLMMIPOHP(float PJHOLDOLLCN)  [RVA 0x306C588]
// ChangingSprite$$FLKLMMIPOHP @ RVA 0x306C588

float ChangingSprite__FLKLMMIPOHP(ChangingSprite_o *__this,float PJHOLDOLLCN,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (__this->fields).HFLMCCMEBNP;
  fVar4 = (__this->fields).PLABOODCDAJ;
  do {
    fVar5 = (__this->fields).GDIIBOGHNOJ + fVar4;
    fVar4 = PJHOLDOLLCN - fVar5 * (float)(int)(PJHOLDOLLCN / fVar5);
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar4 < 0.0) {
      fVar5 = 0.0;
    }
    bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
    if (bVar1) {
      fVar4 = (__this->fields).BDDKEKCPADJ;
      fVar2 = (__this->fields).GDIIBOGHNOJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316c428 with catch @ 0316c5e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316c450 with catch @ 0316c5ec
                        */
      fVar3 = fVar5 + fVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316c42c with catch @ 0316c5f0
                        */
      if ((fVar4 < fVar2) && (fVar2 <= fVar3)) {
                    /* try { // try from 0316c608 to 0326c61f has its CatchHandler @ 0316c698 */
        ChangingSprite__KJKENPICBLD(__this,false,true,in_x3);
        fVar2 = (__this->fields).GDIIBOGHNOJ;
        fVar3 = fVar5 + (__this->fields).BDDKEKCPADJ;
      }
      (__this->fields).BDDKEKCPADJ = fVar3;
      if (fVar3 < fVar2) {
        return fVar5;
      }
                    /* try { // try from 0316c620 to 0326c687 has its CatchHandler @ 0316c330 */
      fVar4 = (__this->fields).PLABOODCDAJ;
      fVar6 = (fVar3 - fVar2) + (__this->fields).HFLMCCMEBNP;
      (__this->fields).HFLMCCMEBNP = fVar6;
      if (fVar6 < fVar4) {
                    /* try { // try from 0316c688 to 0326c697 has its CatchHandler @ 0316c698 */
        return fVar2 - ((fVar3 - fVar5) + 1e-10);
      }
      PJHOLDOLLCN = fVar6 - fVar4;
    }
    else {
      fVar4 = (__this->fields).PLABOODCDAJ;
      fVar5 = fVar5 + (__this->fields).HFLMCCMEBNP;
      (__this->fields).HFLMCCMEBNP = fVar5;
      if (fVar5 < fVar4) {
        return 0.0;
      }
      PJHOLDOLLCN = fVar5 - fVar4;
    }
    (__this->fields).HFLMCCMEBNP = 0.0;
    (__this->fields).BDDKEKCPADJ = 0.0;
    fVar2 = 0.0;
  } while( true );
}


// ===== public void .ctor(ChangingSprite.GNPGFOHLBOJ ACCIHBHMFPN)  [RVA 0x306C6E8]
// ChangingSprite$$.ctor @ RVA 0x306C6E8

void ChangingSprite___ctor(ChangingSprite_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  FKAKHBPABPA_o *pFVar1;
  FKAKHBPABPA_o **ppFVar2;
  ChangingSprite_GPAPFODFLNH_o *pGVar3;
  ChangingSprite_GPAPFODFLNH_o **ppGVar4;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Collections_Generic_List_GMGALNFPLPA__o **ppSVar5;
  
  if ((DAT_04565f3e & 1) == 0) {
    FUN_01bab630(&FKAKHBPABPA_TypeInfo);
    FUN_01bab630(&ChangingSprite_GPAPFODFLNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChangingSprite>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ChangingSprite>_TypeInfo);
    DAT_04565f3e = 1;
  }
  pFVar1 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar1,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).CICPBJDCAOD;
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  pFVar1 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar1,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).OBALFGOMLOL;
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  pFVar1 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar1,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).OGLDEIPGBAF;
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  pFVar1 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar1,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).DOEIKBGEBNC;
  *ppFVar2 = pFVar1;
  thunk_FUN_01c20e04(ppFVar2,pFVar1);
  pGVar3 = (ChangingSprite_GPAPFODFLNH_o *)thunk_FUN_01bda818(ChangingSprite_GPAPFODFLNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  ppGVar4 = &(__this->fields).ENNJLAAEABK;
  *ppGVar4 = pGVar3;
  thunk_FUN_01c20e04(ppGVar4,pGVar3);
  pGVar3 = (ChangingSprite_GPAPFODFLNH_o *)thunk_FUN_01bda818(ChangingSprite_GPAPFODFLNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  ppGVar4 = &(__this->fields).JBPELKEMOCM;
  *ppGVar4 = pGVar3;
  thunk_FUN_01c20e04(ppGVar4,pGVar3);
  __this_00 = (System_Collections_Generic_List_GMGALNFPLPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ChangingSprite>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ChangingSprite>__ctor__);
  ppSVar5 = &(__this->fields).DOLDMIEIMPL;
  *ppSVar5 = __this_00;
  thunk_FUN_01c20e04(ppSVar5,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  (__this->fields).LMMNFIDBANA = false;
  (__this->fields).FADPPLIEOGB = false;
  (__this->fields).EPFNMABINOG = true;
  (__this->fields).DGGFJKAOEGD = false;
  return;
}


// ===== public void DEPAPJCFOLJ(float AINBPAEDKKN, float CJNHFNHJHPE, float GAJONDLDKLI)  [RVA 0x306C89C]
// ChangingSprite$$DEPAPJCFOLJ @ RVA 0x306C89C

void ChangingSprite__DEPAPJCFOLJ
               (ChangingSprite_o *__this,float AINBPAEDKKN,float CJNHFNHJHPE,float GAJONDLDKLI,
               MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).CICPBJDCAOD;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__KFAABFCCGHH(__this_00,AINBPAEDKKN,CJNHFNHJHPE,GAJONDLDKLI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AOKENFHKCEF(float JMDNEKBBCCK)  [RVA 0x306C8B8]
// ChangingSprite$$AOKENFHKCEF @ RVA 0x306C8B8

void ChangingSprite__AOKENFHKCEF(ChangingSprite_o *__this,float JMDNEKBBCCK,MethodInfo *method)

{
  (__this->fields).PLABOODCDAJ = JMDNEKBBCCK;
  return;
}


// ===== public bool AHCKBJBLBLI()  [RVA 0x306C8C0]
// ChangingSprite$$AHCKBJBLBLI @ RVA 0x306C8C0

bool ChangingSprite__AHCKBJBLBLI(ChangingSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  ChangingSprite_GPAPFODFLNH_o *pGVar2;
  
  pGVar2 = (__this->fields).ENNJLAAEABK;
  if (pGVar2 != (ChangingSprite_GPAPFODFLNH_o *)0x0) {
    if ((pGVar2->fields).BLOGOHKEPHI == false) {
      pGVar2 = (__this->fields).JBPELKEMOCM;
      if (pGVar2 == (ChangingSprite_GPAPFODFLNH_o *)0x0) goto LAB_0316c8f8;
      bVar1 = (pGVar2->fields).BLOGOHKEPHI != false;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
LAB_0316c8f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IFHBIJJJPEG(float MJBMLNKAPGC)  [RVA 0x306C8FC]
// ChangingSprite$$IFHBIJJJPEG @ RVA 0x306C8FC

void ChangingSprite__IFHBIJJJPEG(ChangingSprite_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).OGLDEIPGBAF;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__JEFMDBBCIOB(__this_00,MJBMLNKAPGC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KPPJNBBDFAL(float AINBPAEDKKN, float CJNHFNHJHPE, float GAJONDLDKLI)  [RVA 0x306C918]
// ChangingSprite$$KPPJNBBDFAL @ RVA 0x306C918

void ChangingSprite__KPPJNBBDFAL
               (ChangingSprite_o *__this,float AINBPAEDKKN,float CJNHFNHJHPE,float GAJONDLDKLI,
               MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).OBALFGOMLOL;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__KFAABFCCGHH(__this_00,AINBPAEDKKN,CJNHFNHJHPE,GAJONDLDKLI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MKNIPJGIADE()  [RVA 0x306C934]
// ChangingSprite$$MKNIPJGIADE @ RVA 0x306C934

void ChangingSprite__MKNIPJGIADE(ChangingSprite_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  (__this->fields).BDDKEKCPADJ = 0.0;
  (__this->fields).HFLMCCMEBNP = 0.0;
  (__this->fields).DJIFHDOPPPE = false;
  ChangingSprite__NOKHGKKMCHA(__this,true,in_x2);
  return;
}


// ===== public void HNODMGDOOAI(MGNDHCBAPEN<float, float> CMHCEEPDACF)  [RVA 0x306CA70]
// ChangingSprite$$HNODMGDOOAI @ RVA 0x306CA70

void ChangingSprite__HNODMGDOOAI
               (ChangingSprite_o *__this,MGNDHCBAPEN_float__float__o *CMHCEEPDACF,MethodInfo *method)

{
  float fVar1;
  ChangingSprite_GPAPFODFLNH_o *pGVar2;
  
  pGVar2 = (__this->fields).ENNJLAAEABK;
  if ((pGVar2 != (ChangingSprite_GPAPFODFLNH_o *)0x0) &&
     ((pGVar2->fields).BLOGOHKEPHI = true, CMHCEEPDACF != (MGNDHCBAPEN_float__float__o *)0x0)) {
    fVar1 = (CMHCEEPDACF->fields).DOKHHBGJICA;
    (pGVar2->fields).PEOMJHJICCM = (CMHCEEPDACF->fields).PHPELPFMOII;
    (pGVar2->fields).GKBCJOEFFCP = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual bool KLGJMPDHMKE(string LFGKEPCBPKF, string AAIHDEKMIJG, float LFJGFLNMBMC, float NMFKJBOAOLK, float DAPHCPICAAC, int ABKPKINOIKE = 0, int KBLGFJOJCLG = -1, float NOOEONBJNJN = 0)  [RVA 0x306CA9C]
// ChangingSprite$$KLGJMPDHMKE @ RVA 0x306CA9C

bool ChangingSprite__KLGJMPDHMKE
               (ChangingSprite_o *__this,System_String_o *LFGKEPCBPKF,System_String_o *AAIHDEKMIJG,
               float LFJGFLNMBMC,float NMFKJBOAOLK,float DAPHCPICAAC,int32_t ABKPKINOIKE,
               int32_t KBLGFJOJCLG,float NOOEONBJNJN,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  CocosAnimation_o *pCVar4;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Sprite_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Sprite__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  UnityEngine_GameObject_o **ppUVar11;
  CocosAnimation_o **ppCVar12;
  System_Collections_Generic_List_Sprite__o *pSVar13;
  double dVar14;
  double dVar15;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Rect_o UVar17;
  
  if ((DAT_04565f3f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&StringLiteral_2964/*"Anim NO "*/);
    DAT_04565f3f = 1;
  }
  if ((__this->fields).JDNKKGPNHPB != 1) {
    return false;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,LFGKEPCBPKF,(MethodInfo *)0x0);
  ppUVar11 = &(__this->fields).OJJAMKDEMJJ;
  *ppUVar11 = __this_00;
  thunk_FUN_01c20e04(ppUVar11,__this_00);
  if (*ppUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pCVar4 = (CocosAnimation_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (*ppUVar11,Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    ppCVar12 = &(__this->fields).AKBKJNNOMOD;
    *ppCVar12 = pCVar4;
    thunk_FUN_01c20e04(ppCVar12,pCVar4);
    pCVar4 = *ppCVar12;
    pSVar5 = System_String__Concat(AAIHDEKMIJG,LFGKEPCBPKF,(MethodInfo *)0x0);
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      bVar3 = CocosAnimation__Init(pCVar4,pSVar5,2,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar5 = System_String__Concat(StringLiteral_2964/*"Anim NO "*/,AAIHDEKMIJG,LFGKEPCBPKF,(MethodInfo *)0x0)
        ;
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return false;
      }
      if (*ppCVar12 != (CocosAnimation_o *)0x0) {
        CocosAnimation__SetFramesRange(*ppCVar12,ABKPKINOIKE,KBLGFJOJCLG,(MethodInfo *)0x0);
        if (*ppCVar12 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetFirstFrame(*ppCVar12,(MethodInfo *)0x0);
          if (*ppCVar12 != (CocosAnimation_o *)0x0) {
            ((*ppCVar12)->fields)._PPEGDOHGLJJ_k__BackingField = LFJGFLNMBMC / 60.0;
            ChangingSprite__IDDKDJOELLP(__this,NOOEONBJNJN,method_00);
            pCVar4 = (__this->fields).AKBKJNNOMOD;
            if (pCVar4 != (CocosAnimation_o *)0x0) {
              (__this->fields).GDIIBOGHNOJ =
                   (float)(pCVar4->fields)._BNKDPKMAPPM_k__BackingField * LFJGFLNMBMC + 1.0;
              pSVar13 = (pCVar4->fields).HKCNDNBLAHI;
              if (pSVar13 != (System_Collections_Generic_List_Sprite__o *)0x0) {
                pSVar8 = pSVar13->klass;
                uVar1._0_1_ = (pSVar8->_2).rank;
                uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
                uVar9 = (ulong)uVar1;
                if (uVar9 != 0) {
                  piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                        (Il2CppClass *)System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo) {
                      pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
                      goto LAB_0316ccf0;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                pVVar6 = (VirtualInvokeData *)
                         FUN_01b81914(pSVar13,
                                      System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo,0);
LAB_0316ccf0:
                pUVar7 = (UnityEngine_Sprite_o *)(*pVVar6->methodPtr)(pSVar13,0,pVVar6->method);
                if (pUVar7 != (UnityEngine_Sprite_o *)0x0) {
                  UVar16 = UnityEngine_Sprite__get_rect(pUVar7,(MethodInfo *)0x0);
                  if ((*ppCVar12 != (CocosAnimation_o *)0x0) &&
                     (pSVar13 = ((*ppCVar12)->fields).HKCNDNBLAHI,
                     pSVar13 != (System_Collections_Generic_List_Sprite__o *)0x0)) {
                    pSVar8 = pSVar13->klass;
                    uVar2._0_1_ = (pSVar8->_2).rank;
                    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
                    uVar9 = (ulong)uVar2;
                    if (uVar9 != 0) {
                      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                            (Il2CppClass *)System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo
                           ) {
                          pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
                          goto LAB_0316cd6c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    pVVar6 = (VirtualInvokeData *)
                             FUN_01b81914(UVar16.fields.m_XMin,UVar16.fields.m_YMin,
                                          UVar16.fields.m_Width,UVar16.fields.m_Height,pSVar13,
                                          System_Collections_Generic_IReadOnlyList<Sprite>_TypeInfo,
                                          0);
LAB_0316cd6c:
                    pUVar7 = (UnityEngine_Sprite_o *)(*pVVar6->methodPtr)(pSVar13,0,pVVar6->method);
                    if (pUVar7 != (UnityEngine_Sprite_o *)0x0) {
                      UVar17 = UnityEngine_Sprite__get_rect(pUVar7,(MethodInfo *)0x0);
                      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(UVar17.fields.m_XMin,UVar17.fields.m_YMin,
                                           UVar17.fields.m_Width);
                      }
                      dVar14 = System_Math__Round((double)(NMFKJBOAOLK / UVar16.fields.m_Width),4,1,
                                                  (MethodInfo *)0x0);
                      dVar15 = System_Math__Round((double)(DAPHCPICAAC / UVar17.fields.m_Height),4,1
                                                  ,(MethodInfo *)0x0);
                      if ((*ppUVar11 != (UnityEngine_GameObject_o *)0x0) &&
                         (__this_01 = UnityEngine_GameObject__get_transform
                                                (*ppUVar11,(MethodInfo *)0x0),
                         __this_01 != (UnityEngine_Transform_o *)0x0)) {
                        value.fields.x = (float)dVar14;
                        value.fields.y = (float)dVar15;
                        value.fields.z = 1.0;
                        UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
                        return true;
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


// ===== public void ACHCKILJGJK(ChangingSprite DMMLPNCPPHD)  [RVA 0x306CEA4]
// ChangingSprite$$ACHCKILJGJK @ RVA 0x306CEA4

void ChangingSprite__ACHCKILJGJK(ChangingSprite_o *__this,ChangingSprite_o *DMMLPNCPPHD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  ChangingSprite_array *pGVar3;
  ChangingSprite_o *pGVar4;
  ChangingSprite_o **ppGVar5;
  
  if ((DAT_04565f40 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChangingSprite>_Add__);
    FUN_01bab630(&StringLiteral_4263/*"ChangingSprite::AddChild already has _parent!"*/);
    DAT_04565f40 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<ChangingSprite>_Add__;
  if (DMMLPNCPPHD == (ChangingSprite_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).DOLDMIEIMPL;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    pGVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pGVar3 != (ChangingSprite_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pGVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pGVar3->m_Items[(int)uVar1] = DMMLPNCPPHD;
        thunk_FUN_01c20e04(pGVar3->m_Items + (int)uVar1,DMMLPNCPPHD);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)DMMLPNCPPHD,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      ppGVar5 = &(DMMLPNCPPHD->fields).MEMMHKLOBKN;
      pGVar4 = *ppGVar5;
      if ((pGVar4 != (ChangingSprite_o *)0x0) && (pGVar4 != __this)) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_4263/*"ChangingSprite::AddChild already has _parent!"*/,(MethodInfo *)0x0);
      }
      (DMMLPNCPPHD->fields).MEMMHKLOBKN = __this;
      thunk_FUN_01c20e04(ppGVar5,__this);
      (DMMLPNCPPHD->fields).DJIFHDOPPPE = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ICBFBLDJMIM(float OLPBPFEFIJJ, float FNOFNFBBBOC)  [RVA 0x306CFC4]
// ChangingSprite$$ICBFBLDJMIM @ RVA 0x306CFC4

void ChangingSprite__ICBFBLDJMIM
               (ChangingSprite_o *__this,float OLPBPFEFIJJ,float FNOFNFBBBOC,MethodInfo *method)

{
  (__this->fields).FINDHOOJJII = OLPBPFEFIJJ;
  (__this->fields).OMCMPPFFEHH = FNOFNFBBBOC;
  return;
}


// ===== public void MIEOFLLFAEP()  [RVA 0x306CFCC]
// ChangingSprite$$MIEOFLLFAEP @ RVA 0x306CFCC

void ChangingSprite__MIEOFLLFAEP(ChangingSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_SpriteRenderer_o **ppUVar3;
  UnityEngine_GameObject_o **ppUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_ParticleSystem_o **ppUVar6;
  CocosAnimation_o **ppCVar7;
  CocosAnimation_o *x;
  UnityEngine_SpriteRenderer_o *x_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565f41 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChangingSprite>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChangingSprite>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChangingSprite>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChangingSprite>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f41 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DOLDMIEIMPL;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ChangingSprite>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<ChangingSprite>_MoveNext__
                             ), bVar1) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_60.fields._current[10].klass = (Il2CppClass *)(__this->fields).MEMMHKLOBKN;
      thunk_FUN_01c20e04();
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<ChangingSprite>_Dispose__);
    ppUVar4 = &(__this->fields).OJJAMKDEMJJ;
    pUVar5 = (UnityEngine_Object_o *)*ppUVar4;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_GameObject__get_gameObject(*ppUVar4,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    ppUVar6 = &(__this->fields).HGMMHCMHINJ;
    pUVar5 = (UnityEngine_Object_o *)*ppUVar6;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Component_o *)*ppUVar6 == (UnityEngine_Component_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    ppCVar7 = &(__this->fields).AKBKJNNOMOD;
    x = *ppCVar7;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppCVar7 == (CocosAnimation_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppCVar7,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    ppUVar3 = &(__this->fields).ANFEBGMOGJD;
    x_00 = *ppUVar3;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppUVar3 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0316d22c;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    }
    *ppCVar7 = (CocosAnimation_o *)0x0;
    thunk_FUN_01c20e04(ppCVar7,0);
    *ppUVar6 = (UnityEngine_ParticleSystem_o *)0x0;
    thunk_FUN_01c20e04(ppUVar6,0);
    *ppUVar4 = (UnityEngine_GameObject_o *)0x0;
    thunk_FUN_01c20e04(ppUVar4,0);
    *ppUVar3 = (UnityEngine_SpriteRenderer_o *)0x0;
    thunk_FUN_01c20e04(ppUVar3,0);
    return;
  }
LAB_0316d22c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NOKHGKKMCHA(bool CJNHFNHJHPE)  [RVA 0x306C948]
// ChangingSprite$$NOKHGKKMCHA @ RVA 0x306C948

void ChangingSprite__NOKHGKKMCHA(ChangingSprite_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_SpriteRenderer_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  
  if ((DAT_04565f42 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f42 = 1;
  }
  pUVar3 = (__this->fields).ANFEBGMOGJD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).ANFEBGMOGJD;
    if ((pUVar3 == (UnityEngine_SpriteRenderer_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0316ca6c;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields).OJJAMKDEMJJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).OJJAMKDEMJJ;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316ca6c;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields).HGMMHCMHINJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).HGMMHCMHINJ;
  if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_0316ca6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JOGFIELJEGG(float AFPEODJFNID)  [RVA 0x306D29C]
// ChangingSprite$$JOGFIELJEGG @ RVA 0x306D29C

void ChangingSprite__JOGFIELJEGG(ChangingSprite_o *__this,float AFPEODJFNID,MethodInfo *method)

{
  (__this->fields).CMMGIKGFNOF = AFPEODJFNID;
  return;
}


// ===== public void LDPAAFEFBCL(SpriteDrawMode COMPCBNGHIL)  [RVA 0x306D2A4]
// ChangingSprite$$LDPAAFEFBCL @ RVA 0x306D2A4

void ChangingSprite__LDPAAFEFBCL(ChangingSprite_o *__this,int32_t COMPCBNGHIL,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  CocosAnimation_o *pCVar3;
  
  if ((DAT_04565f43 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f43 = 1;
  }
  pUVar2 = (__this->fields).ANFEBGMOGJD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).ANFEBGMOGJD;
    if (pUVar2 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0316d374;
    UnityEngine_SpriteRenderer__set_drawMode(pUVar2,COMPCBNGHIL,(MethodInfo *)0x0);
  }
  pCVar3 = (__this->fields).AKBKJNNOMOD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pCVar3 = (__this->fields).AKBKJNNOMOD;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetSpriteDrawMode(pCVar3,COMPCBNGHIL,(MethodInfo *)0x0);
    return;
  }
LAB_0316d374:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CGJEJAPKEHG(string PBAGOKJDBMA, string EGANPPCJHNI, string JPPLEGNJFMJ, JHHFDBLANPH.MNHKJDJJINH IGMLPNCPHLD, float NMFKJBOAOLK, float DAPHCPICAAC)  [RVA 0x306D378]
// ChangingSprite$$CGJEJAPKEHG @ RVA 0x306D378

void ChangingSprite__CGJEJAPKEHG
               (ChangingSprite_o *__this,System_String_o *PBAGOKJDBMA,System_String_o *EGANPPCJHNI,
               System_String_o *JPPLEGNJFMJ,JHHFDBLANPH_MNHKJDJJINH_o *IGMLPNCPHLD,float NMFKJBOAOLK
               ,float DAPHCPICAAC,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_SpriteRenderer_o *pUVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  undefined8 uVar9;
  UnityEngine_GameObject_o **ppUVar10;
  UnityEngine_SpriteRenderer_o **ppUVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  UnityEngine_Vector2_o UVar19;
  UnityEngine_Vector2_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04565f44 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10268/*"Pic: {0},{1},{2}"*/);
    DAT_04565f44 = 1;
  }
  if ((__this->fields).JDNKKGPNHPB != 0) {
    return;
  }
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  x = (UnityEngine_Object_o *)
      NGCBNMBJMOE__NECCNHODCAE(PBAGOKJDBMA,EGANPPCJHNI,JPPLEGNJFMJ,false,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar4) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
      if (args != (System_Object_array *)0x0) {
        if ((PBAGOKJDBMA != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(PBAGOKJDBMA,(((args->obj).klass)->_1).element_class),
           lVar5 == 0)) {
LAB_0316d904:
          uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar9,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)PBAGOKJDBMA;
          thunk_FUN_01c20e04(args->m_Items,PBAGOKJDBMA);
          if ((JPPLEGNJFMJ != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(JPPLEGNJFMJ,(((args->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_0316d904;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)JPPLEGNJFMJ;
            thunk_FUN_01c20e04(args->m_Items + 1,JPPLEGNJFMJ);
            if ((EGANPPCJHNI != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(EGANPPCJHNI,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_0316d904;
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = (Il2CppObject *)EGANPPCJHNI;
              thunk_FUN_01c20e04(args->m_Items + 2,EGANPPCJHNI);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_10268/*"Pic: {0},{1},{2}"*/,args,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0316d8fc;
    }
  }
  pUVar6 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(pUVar6,EGANPPCJHNI,(MethodInfo *)0x0);
  ppUVar10 = &(__this->fields).OJJAMKDEMJJ;
  *ppUVar10 = pUVar6;
  thunk_FUN_01c20e04(ppUVar10,pUVar6);
  if (*ppUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (*ppUVar10,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    ppUVar11 = &(__this->fields).ANFEBGMOGJD;
    *ppUVar11 = pUVar7;
    thunk_FUN_01c20e04(ppUVar11,pUVar7);
    pUVar6 = (__this->fields).OJJAMKDEMJJ;
    if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__get_gameObject(pUVar6,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (pUVar6,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MainSettings_TypeInfo);
      }
      if (DAT_04565e5d == '\0') {
        FUN_01bab630(&MainSettings_TypeInfo);
        DAT_04565e5d = '\x01';
      }
      if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      uVar13 = 0;
      if (MainSettings_TypeInfo->static_fields->CHCLEFKLOKH != 1.0) {
        if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0316d8fc;
        UVar19 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564((ulong)UVar19.fields & 0xffffffff,CONCAT44(uVar13,UVar19.fields.y));
        }
        if (DAT_04565e5d == '\0') {
          FUN_01bab630(&MainSettings_TypeInfo);
          DAT_04565e5d = '\x01';
        }
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar16 = MainSettings_TypeInfo->static_fields->CHCLEFKLOKH;
        UVar20 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if (DAT_04565e5d == '\0') {
          FUN_01bab630((ulong)UVar20.fields & 0xffffffff,&MainSettings_TypeInfo);
          DAT_04565e5d = '\x01';
        }
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar19.fields.x = UVar19.fields.x * fVar16;
        UVar19.fields.y = UVar20.fields.y * MainSettings_TypeInfo->static_fields->CHCLEFKLOKH;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar19,(MethodInfo *)0x0);
      }
      if (*ppUVar11 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_SpriteRenderer__set_sprite
                  (*ppUVar11,(UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
        if ((*ppUVar11 != (UnityEngine_SpriteRenderer_o *)0x0) &&
           (UnityEngine_SpriteRenderer__set_drawMode(*ppUVar11,1,(MethodInfo *)0x0),
           x != (UnityEngine_Object_o *)0x0)) {
          UVar18 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          fVar16 = UVar18.fields.m_Width;
          UVar18 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          fVar15 = UVar18.fields.m_Height;
          (__this->fields).LLIFBKDPNKI = 0.0;
          (__this->fields).PDJHCPAFGNH = 0.0;
          bVar4 = false;
          if (IGMLPNCPHLD != (JHHFDBLANPH_MNHKJDJJINH_o *)0x0) {
            bVar1 = (IGMLPNCPHLD->fields).CDHBEDHABDL;
            (__this->fields).LLIFBKDPNKI = (IGMLPNCPHLD->fields).JJOBECCEMMI.fields.x;
            bVar4 = bVar1 != false;
            fVar14 = fVar15;
            fVar17 = fVar16;
            if (!bVar4) {
              fVar14 = fVar16;
              fVar17 = fVar15;
            }
            (__this->fields).PDJHCPAFGNH = (IGMLPNCPHLD->fields).JJOBECCEMMI.fields.y;
            fVar12 = (IGMLPNCPHLD->fields).NPLFJBBBIBH.fields.x;
            fVar15 = (IGMLPNCPHLD->fields).NPLFJBBBIBH.fields.y;
            fVar16 = fVar14;
            if (fVar14 <= fVar12) {
              fVar16 = fVar12;
            }
            if (fVar15 < fVar17) {
              fVar15 = fVar17;
            }
          }
          if ((*ppUVar10 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UVar21 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
            if ((*ppUVar10 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
               pUVar8 != (UnityEngine_Transform_o *)0x0)) {
              uVar2 = (__this->fields).LLIFBKDPNKI;
              uVar3 = (__this->fields).PDJHCPAFGNH;
              UVar21.fields.y = (float)uVar3;
              UVar21.fields.x = (float)uVar2;
              UnityEngine_Transform__set_localPosition(pUVar8,UVar21,(MethodInfo *)0x0);
              if (bVar4) {
                if ((*ppUVar10 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
                   pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0316d8fc;
                UnityEngine_Transform__Rotate(pUVar8,0.0,0.0,90.0,(MethodInfo *)0x0);
                fVar17 = DAPHCPICAAC / fVar15;
                fVar16 = NMFKJBOAOLK / fVar16;
              }
              else {
                fVar17 = NMFKJBOAOLK / fVar16;
                fVar16 = DAPHCPICAAC / fVar15;
              }
              if ((*ppUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                value.fields.y = fVar16;
                value.fields.x = fVar17;
                value.fields.z = 1.0;
                UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0316d8fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IEJFHDGIKJG(float MJBMLNKAPGC)  [RVA 0x306D910]
// ChangingSprite$$IEJFHDGIKJG @ RVA 0x306D910

void ChangingSprite__IEJFHDGIKJG(ChangingSprite_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).CICPBJDCAOD;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__JEFMDBBCIOB(__this_00,MJBMLNKAPGC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ODHMPKGLNPP(string JEGPDLEAOAD, float OAGELANKMBH, float IOJNHKIPJOK)  [RVA 0x306D92C]
// ChangingSprite$$ODHMPKGLNPP @ RVA 0x306D92C

bool ChangingSprite__ODHMPKGLNPP
               (ChangingSprite_o *__this,System_String_o *JEGPDLEAOAD,float OAGELANKMBH,
               float IOJNHKIPJOK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_ParticleSystem_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_ParticleSystem_o **ppUVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04565f45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ParticleSystem>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_9297/*"NO "*/);
    FUN_01bab630(&StringLiteral_10158/*"Particles NO "*/);
    DAT_04565f45 = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load<object>
                (JEGPDLEAOAD,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)x,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316db60;
    pUVar2 = (UnityEngine_ParticleSystem_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    ppUVar4 = &(__this->fields).HGMMHCMHINJ;
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
    if (*ppUVar4 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0316db60;
    UnityEngine_ParticleSystem__Pause(*ppUVar4,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = System_String__Concat(StringLiteral_10158/*"Particles NO "*/,JEGPDLEAOAD,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_9297/*"NO "*/,JEGPDLEAOAD,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316db60;
    pUVar2 = (UnityEngine_ParticleSystem_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<ParticleSystem>__);
    ppUVar4 = &(__this->fields).HGMMHCMHINJ;
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
  }
  __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = IOJNHKIPJOK;
    value.fields.x = OAGELANKMBH;
    value.fields.z = -0.1;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return true;
  }
LAB_0316db60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NGCNIGDMJIM()  [RVA 0x306DB64]
// ChangingSprite$$NGCNIGDMJIM @ RVA 0x306DB64

void ChangingSprite__NGCNIGDMJIM(ChangingSprite_o *__this,MethodInfo *method)

{
  System_Action_GMGALNFPLPA__o **ppSVar1;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Action_GMGALNFPLPA__o *action;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565f46 & 1) == 0) {
    FUN_01bab630(&System_Action<ChangingSprite>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChangingSprite>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChangingSprite>_get_Count__);
    FUN_01bab630(&Method_GMGALNFPLPA_<>c_CLOGMAPBOCG__);
    auVar2 = FUN_01bab630(&ChangingSprite_<>c_TypeInfo);
    DAT_04565f46 = 1;
  }
  __this_00 = (__this->fields).DOLDMIEIMPL;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      if ((ChangingSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = ChangingSprite_<>c_TypeInfo->static_fields->__9__59_0;
      if (action == (System_Action_GMGALNFPLPA__o *)0x0) {
        if ((ChangingSprite_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_GMGALNFPLPA__o *)
                 thunk_FUN_01bda818(System_Action<ChangingSprite>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar1 = &ChangingSprite_<>c_TypeInfo->static_fields->__9__59_0;
        *ppSVar1 = action;
        thunk_FUN_01c20e04(ppSVar1,action);
      }
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<ChangingSprite>_ForEach__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void CGDANJBIKGL(float AINBPAEDKKN, float CJNHFNHJHPE, float GAJONDLDKLI)  [RVA 0x306DC90]
// ChangingSprite$$CGDANJBIKGL @ RVA 0x306DC90

void ChangingSprite__CGDANJBIKGL
               (ChangingSprite_o *__this,float AINBPAEDKKN,float CJNHFNHJHPE,float GAJONDLDKLI,
               MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).DOEIKBGEBNC;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__KFAABFCCGHH(__this_00,AINBPAEDKKN,CJNHFNHJHPE,GAJONDLDKLI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(ChangingSprite.GNPGFOHLBOJ ACCIHBHMFPN, XmlNode AHDGNOJPPIB)  [RVA 0x306DCAC]
// ChangingSprite$$.ctor @ RVA 0x306DCAC

void ChangingSprite___ctor(ChangingSprite_o *__this,int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       MethodInfo *method)

{
  bool bVar1;
  FKAKHBPABPA_o *pFVar2;
  FKAKHBPABPA_o **ppFVar3;
  ChangingSprite_GPAPFODFLNH_o *pGVar4;
  ChangingSprite_GPAPFODFLNH_o **ppGVar5;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Collections_Generic_List_GMGALNFPLPA__o **ppSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  
  if ((DAT_04565f47 & 1) == 0) {
    FUN_01bab630(&FKAKHBPABPA_TypeInfo);
    FUN_01bab630(&ChangingSprite_GPAPFODFLNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChangingSprite>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ChangingSprite>_TypeInfo);
    FUN_01bab630(&StringLiteral_11077/*"ReappearChildLaunch"*/);
    FUN_01bab630(&StringLiteral_5727/*"EndAnimChildLaunch"*/);
    FUN_01bab630(&StringLiteral_7097/*"HidePaused"*/);
    DAT_04565f47 = 1;
  }
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).CICPBJDCAOD;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).OBALFGOMLOL;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).OGLDEIPGBAF;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).DOEIKBGEBNC;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pGVar4 = (ChangingSprite_GPAPFODFLNH_o *)thunk_FUN_01bda818(ChangingSprite_GPAPFODFLNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  ppGVar5 = &(__this->fields).ENNJLAAEABK;
  *ppGVar5 = pGVar4;
  thunk_FUN_01c20e04(ppGVar5,pGVar4);
  pGVar4 = (ChangingSprite_GPAPFODFLNH_o *)thunk_FUN_01bda818(ChangingSprite_GPAPFODFLNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  ppGVar5 = &(__this->fields).JBPELKEMOCM;
  *ppGVar5 = pGVar4;
  thunk_FUN_01c20e04(ppGVar5,pGVar4);
  __this_00 = (System_Collections_Generic_List_GMGALNFPLPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ChangingSprite>_TypeInfo);
                    /* try { // try from 0316de3c to 0326df47 has its CatchHandler @ 0316de3c
                       catch() { ... } // from try @ 0316de3c with catch @ 0316de3c
                       catch() { ... } // from try @ 0316df80 with catch @ 0316de3c
                       catch() { ... } // from try @ 0316e184 with catch @ 0316de3c
                       catch() { ... } // from try @ 0316e204 with catch @ 0316de3c */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ChangingSprite>__ctor__);
  ppSVar6 = &(__this->fields).DOLDMIEIMPL;
  *ppSVar6 = __this_00;
  thunk_FUN_01c20e04(ppSVar6,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).EPFNMABINOG = true;
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_5727/*"EndAnimChildLaunch"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
      (__this->fields).LMMNFIDBANA = bVar1;
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_11077/*"ReappearChildLaunch"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
        (__this->fields).FADPPLIEOGB = bVar1;
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_7097/*"HidePaused"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
          (__this->fields).DGGFJKAOEGD = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KJKENPICBLD(bool JICKGBNHKNK, bool BEEKKKCGENK)  [RVA 0x306C690]
// ChangingSprite$$KJKENPICBLD @ RVA 0x306C690

void ChangingSprite__KJKENPICBLD
               (ChangingSprite_o *__this,bool JICKGBNHKNK,bool BEEKKKCGENK,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)JICKGBNHKNK;
                    /* catch() { ... } // from try @ 0316c608 with catch @ 0316c698
                       catch() { ... } // from try @ 0316c688 with catch @ 0316c698 */
                    /* try { // try from 0316c69c to 0326c69f has its CatchHandler @ 0316c6a8 */
                    /* try { // try from 0316c6a0 to 0326c6ab has its CatchHandler @ 0316c330 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0316c69c with catch @ 0316c6a8
                        */
  if ((__this->fields).MEMMHKLOBKN != (ChangingSprite_o *)0x0) {
    ChangingSprite__ANPIONBGFBF(__this,method_00);
    method_00 = extraout_x1;
  }
  if (((BEEKKKCGENK & (__this->fields).LMMNFIDBANA) == 0) &&
     ((JICKGBNHKNK & (__this->fields).FADPPLIEOGB) == 0)) {
    return;
  }
  ChangingSprite__NGCNIGDMJIM(__this,method_00);
  return;
}


// ===== public void HPONNCNPPNC(MGNDHCBAPEN<float, float> CMHCEEPDACF)  [RVA 0x306DFD4]
// ChangingSprite$$HPONNCNPPNC @ RVA 0x306DFD4

void ChangingSprite__HPONNCNPPNC
               (ChangingSprite_o *__this,MGNDHCBAPEN_float__float__o *CMHCEEPDACF,MethodInfo *method)

{
  float fVar1;
  ChangingSprite_GPAPFODFLNH_o *pGVar2;
  
  pGVar2 = (__this->fields).JBPELKEMOCM;
  if ((pGVar2 != (ChangingSprite_GPAPFODFLNH_o *)0x0) &&
     ((pGVar2->fields).BLOGOHKEPHI = true, CMHCEEPDACF != (MGNDHCBAPEN_float__float__o *)0x0)) {
    fVar1 = (CMHCEEPDACF->fields).DOKHHBGJICA;
    (pGVar2->fields).PEOMJHJICCM = (CMHCEEPDACF->fields).PHPELPFMOII;
    (pGVar2->fields).GKBCJOEFFCP = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EJCNFEDPCOP(float MJBMLNKAPGC)  [RVA 0x306E000]
// ChangingSprite$$EJCNFEDPCOP @ RVA 0x306E000

void ChangingSprite__EJCNFEDPCOP(ChangingSprite_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).DOEIKBGEBNC;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__JEFMDBBCIOB(__this_00,MJBMLNKAPGC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void BDHAMOEKNNK(float GGHJBLBMGLK = 1)  [RVA 0x306E01C]
// ChangingSprite$$BDHAMOEKNNK @ RVA 0x306E01C

void ChangingSprite__BDHAMOEKNNK(ChangingSprite_o *__this,float GGHJBLBMGLK,MethodInfo *method)

{
  undefined1 auVar1 [12];
  bool bVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  CocosAnimation_o *pCVar3;
  FKAKHBPABPA_o *pFVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_SpriteRenderer_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  char cVar8;
  int iVar9;
  ChangingSprite_GPAPFODFLNH_o *pGVar10;
  UnityEngine_Object_o *x;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o UVar19;
  
  if ((DAT_04565f48 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f48 = 1;
  }
  if (((__this->fields).MEMMHKLOBKN != (ChangingSprite_o *)0x0) &&
     ((__this->fields).DJIFHDOPPPE != false)) {
    return;
  }
  if ((__this->fields).HFLMCCMEBNP <= 0.0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (__this->fields).DGGFJKAOEGD;
  }
  ChangingSprite__NOKHGKKMCHA(__this,cVar8 == '\0',in_x2);
  fVar16 = GGHJBLBMGLK * 0.016666668;
  ChangingSprite__AHEEHKHEBOO(__this,fVar16,method_00);
  iVar9 = (__this->fields).JDNKKGPNHPB;
  method_01 = extraout_x1;
  if (iVar9 == 2) {
    x = (UnityEngine_Object_o *)(__this->fields).HGMMHCMHINJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (fVar16 <= 0.0) {
        return;
      }
      __this_00 = (__this->fields).HGMMHCMHINJ;
      if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
        UnityEngine_ParticleSystem__Simulate(__this_00,fVar16,true,false,(MethodInfo *)0x0);
        return;
      }
      goto LAB_0316e3e0;
    }
    iVar9 = (__this->fields).JDNKKGPNHPB;
    method_01 = extraout_x1_00;
  }
  if (iVar9 == 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316df48 with catch @ 0316e14c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316df70 with catch @ 0316e150
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316df4c with catch @ 0316e154
                        */
    fVar13 = ChangingSprite__FLKLMMIPOHP(__this,GGHJBLBMGLK,method_01);
    if (fVar13 <= 0.0) {
      if (0.0 < (__this->fields).HFLMCCMEBNP) {
                    /* try { // try from 0316e184 to 0326e1eb has its CatchHandler @ 0316de3c */
        pCVar3 = (__this->fields).AKBKJNNOMOD;
        if (pCVar3 == (CocosAnimation_o *)0x0) goto LAB_0316e3e0;
        CocosAnimation__ClearSpriteResetFrames(pCVar3,(MethodInfo *)0x0);
      }
    }
    else {
      pCVar3 = (__this->fields).AKBKJNNOMOD;
      if (pCVar3 == (CocosAnimation_o *)0x0) goto LAB_0316e3e0;
                    /* try { // try from 0316e16c to 0326e183 has its CatchHandler @ 0316e1fc */
      CocosAnimation__Render(pCVar3,fVar13 * 0.016666668,(MethodInfo *)0x0);
    }
  }
  pfVar11 = &(__this->fields).BDGHBAOGJPE;
  pFVar4 = (__this->fields).CICPBJDCAOD;
  fVar13 = *pfVar11 + (__this->fields).FINDHOOJJII;
  *pfVar11 = fVar13;
  if (pFVar4 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__JEFMDBBCIOB(pFVar4,fVar16,(MethodInfo *)0x0);
    pFVar4 = (__this->fields).CICPBJDCAOD;
    if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
    fVar14 = FKAKHBPABPA__HECFKGPGKPF(pFVar4,(MethodInfo *)0x0);
    pfVar12 = &(__this->fields).KMMKCAMPAHJ;
    pFVar4 = (__this->fields).OBALFGOMLOL;
    fVar17 = *pfVar12 + (__this->fields).OMCMPPFFEHH;
    *pfVar12 = fVar17;
    if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
                    /* try { // try from 0316e1ec to 0326e1fb has its CatchHandler @ 0316e1fc */
    FKAKHBPABPA__JEFMDBBCIOB(pFVar4,fVar16,(MethodInfo *)0x0);
    pFVar4 = (__this->fields).OBALFGOMLOL;
                    /* catch() { ... } // from try @ 0316e16c with catch @ 0316e1fc
                       catch() { ... } // from try @ 0316e1ec with catch @ 0316e1fc */
    if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
                    /* try { // try from 0316e200 to 0326e203 has its CatchHandler @ 0316e20c */
                    /* try { // try from 0316e204 to 0326e20f has its CatchHandler @ 0316de3c */
    fVar15 = FKAKHBPABPA__HECFKGPGKPF(pFVar4,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).OJJAMKDEMJJ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0316e200 with catch @ 0316e20c
                        */
    if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_0316e3e0;
    UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).OJJAMKDEMJJ;
    if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_0316e3e0;
    fVar13 = fVar13 + fVar14;
    fVar17 = fVar17 + fVar15;
    UVar19.fields.y = fVar17 + (__this->fields).PDJHCPAFGNH;
    UVar19.fields.x = fVar13 + (__this->fields).LLIFBKDPNKI;
    UnityEngine_Transform__set_localPosition(pUVar6,UVar19,(MethodInfo *)0x0);
    pFVar4 = (__this->fields).DOEIKBGEBNC;
    if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
    bVar2 = FKAKHBPABPA__POFDNNBNINH(pFVar4,(MethodInfo *)0x0);
    if (bVar2) {
      pFVar4 = (__this->fields).DOEIKBGEBNC;
      if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
      FKAKHBPABPA__JEFMDBBCIOB(pFVar4,fVar16,(MethodInfo *)0x0);
      pFVar4 = (__this->fields).DOEIKBGEBNC;
      if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
      fVar14 = FKAKHBPABPA__HECFKGPGKPF(pFVar4,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).OJJAMKDEMJJ;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316e3e0;
      fVar15 = (__this->fields).CMMGIKGFNOF;
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0316e3e0;
      auVar1._4_8_ = 0;
      auVar1._0_4_ = fVar14 + fVar15;
      UnityEngine_Transform__set_eulerAngles
                (pUVar6,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
    }
    pFVar4 = (__this->fields).OGLDEIPGBAF;
    if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
    bVar2 = FKAKHBPABPA__POFDNNBNINH(pFVar4,(MethodInfo *)0x0);
    if (bVar2) {
      pFVar4 = (__this->fields).OGLDEIPGBAF;
      if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
      FKAKHBPABPA__JEFMDBBCIOB(pFVar4,fVar16,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).ANFEBGMOGJD;
      if (pUVar7 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0316e3e0;
      UVar18 = UnityEngine_SpriteRenderer__get_color(pUVar7,(MethodInfo *)0x0);
      value.fields.b = UVar18.fields.b;
      pFVar4 = (__this->fields).OGLDEIPGBAF;
      if (pFVar4 == (FKAKHBPABPA_o *)0x0) goto LAB_0316e3e0;
      fVar16 = FKAKHBPABPA__HECFKGPGKPF(pFVar4,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).ANFEBGMOGJD;
      if (pUVar7 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0316e3e0;
      value.fields.a = fVar16 / 100.0;
      value.fields.r = (float)(int)UVar18.fields._0_8_;
      value.fields.g = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
      UnityEngine_SpriteRenderer__set_color(pUVar7,value,(MethodInfo *)0x0);
    }
    pGVar10 = (__this->fields).ENNJLAAEABK;
    if (pGVar10 == (ChangingSprite_GPAPFODFLNH_o *)0x0) goto LAB_0316e3e0;
    if ((pGVar10->fields).BLOGOHKEPHI != false) {
      fVar14 = (pGVar10->fields).PEOMJHJICCM;
      fVar16 = (pGVar10->fields).GKBCJOEFFCP;
      if (fVar16 < fVar13) {
        fVar14 = fVar14 - fVar16;
        pfVar12 = pfVar11;
        fVar17 = fVar13;
        goto LAB_0316e3b0;
      }
      if (fVar13 < fVar14) {
        fVar14 = fVar16 - fVar14;
        pfVar12 = pfVar11;
        fVar17 = fVar13;
        goto LAB_0316e3b0;
      }
    }
    pGVar10 = (__this->fields).JBPELKEMOCM;
    if (pGVar10 != (ChangingSprite_GPAPFODFLNH_o *)0x0) {
      if ((pGVar10->fields).BLOGOHKEPHI == false) {
        return;
      }
      fVar14 = (pGVar10->fields).PEOMJHJICCM;
      fVar16 = (pGVar10->fields).GKBCJOEFFCP;
      if (fVar17 <= fVar16) {
        if (fVar14 <= fVar17) {
          return;
        }
        fVar14 = fVar16 - fVar14;
      }
      else {
        fVar14 = fVar14 - fVar16;
      }
LAB_0316e3b0:
      *pfVar12 = fVar17 + fVar14;
      ChangingSprite__KJKENPICBLD(__this,true,false,in_x3);
      return;
    }
  }
LAB_0316e3e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IDDKDJOELLP(float NOOEONBJNJN)  [RVA 0x306CE28]
// ChangingSprite$$IDDKDJOELLP @ RVA 0x306CE28

/* WARNING: Removing unreachable block (ram,0x0316ce48) */

void ChangingSprite__IDDKDJOELLP(ChangingSprite_o *__this,float NOOEONBJNJN,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (NOOEONBJNJN <= 0.0) {
    if (NOOEONBJNJN < 0.0) {
      fVar1 = (float)(int)(NOOEONBJNJN / -100.0) * -100.0 - NOOEONBJNJN;
      fVar2 = fVar1;
      if (100.0 < fVar1) {
        fVar2 = 100.0;
      }
      NOOEONBJNJN = 100.0 - fVar2;
      if (fVar1 < 0.0) {
        NOOEONBJNJN = 100.0;
      }
    }
  }
  else {
    NOOEONBJNJN = NOOEONBJNJN - (float)(int)(NOOEONBJNJN / 100.0) * 100.0;
    if (NOOEONBJNJN < 0.0) {
      NOOEONBJNJN = 0.0;
    }
  }
  (__this->fields).KMMCDBNINOB = NOOEONBJNJN / 100.0;
  return;
}


// ===== public void JDHHCOGPMOM(float MJBMLNKAPGC)  [RVA 0x306E424]
// ChangingSprite$$JDHHCOGPMOM @ RVA 0x306E424

void ChangingSprite__JDHHCOGPMOM(ChangingSprite_o *__this,float MJBMLNKAPGC,MethodInfo *method)

{
  FKAKHBPABPA_o *__this_00;
  
  __this_00 = (__this->fields).OBALFGOMLOL;
  if (__this_00 != (FKAKHBPABPA_o *)0x0) {
    FKAKHBPABPA__JEFMDBBCIOB(__this_00,MJBMLNKAPGC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ANPIONBGFBF()  [RVA 0x306DF48]
// ChangingSprite$$ANPIONBGFBF @ RVA 0x306DF48

void ChangingSprite__ANPIONBGFBF(ChangingSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  CocosAnimation_o *pCVar2;
  
                    /* try { // try from 0316df48 to 0326df4b has its CatchHandler @ 0316e14c */
                    /* try { // try from 0316df4c to 0326df6f has its CatchHandler @ 0316e154 */
  if ((DAT_04565f49 & 1) == 0) {
                    /* try { // try from 0316df70 to 0326df7f has its CatchHandler @ 0316e150 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f49 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0316df80 to 0326e16b has its CatchHandler @ 0316de3c */
  (__this->fields).DJIFHDOPPPE = true;
  pCVar2 = (__this->fields).AKBKJNNOMOD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar2 = (__this->fields).AKBKJNNOMOD;
    if (pCVar2 == (CocosAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CocosAnimation__ClearSpriteResetFrames(pCVar2,(MethodInfo *)0x0);
  }
  ChangingSprite__NOKHGKKMCHA(__this,false,method_00);
  return;
}

