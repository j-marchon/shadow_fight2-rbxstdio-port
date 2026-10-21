// GMGALNFPLPA$$BDHAMOEKNNK @ RVA 0x306E01C

void GMGALNFPLPA__BDHAMOEKNNK(GMGALNFPLPA_o *__this,float GGHJBLBMGLK,MethodInfo *method)

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
  GMGALNFPLPA_GPAPFODFLNH_o *pGVar10;
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
  if (((__this->fields).MEMMHKLOBKN != (GMGALNFPLPA_o *)0x0) &&
     ((__this->fields).DJIFHDOPPPE != false)) {
    return;
  }
  if ((__this->fields).HFLMCCMEBNP <= 0.0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (__this->fields).DGGFJKAOEGD;
  }
  GMGALNFPLPA__NOKHGKKMCHA(__this,cVar8 == '\0',in_x2);
  fVar16 = GGHJBLBMGLK * 0.016666668;
  GMGALNFPLPA__AHEEHKHEBOO(__this,fVar16,method_00);
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
    fVar13 = GMGALNFPLPA__FLKLMMIPOHP(__this,GGHJBLBMGLK,method_01);
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
    if (pGVar10 == (GMGALNFPLPA_GPAPFODFLNH_o *)0x0) goto LAB_0316e3e0;
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
    if (pGVar10 != (GMGALNFPLPA_GPAPFODFLNH_o *)0x0) {
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
      GMGALNFPLPA__KJKENPICBLD(__this,true,false,in_x3);
      return;
    }
  }
LAB_0316e3e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

