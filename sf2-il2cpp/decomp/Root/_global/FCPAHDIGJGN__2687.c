// TypeDefIndex 2687
// Namespace: 
// public class FCPAHDIGJGN : NHJCFGACFDF
// Fields:

// ===== public override string BKKOBBDEPFH()  [RVA 0x33CA8C4]
// FCPAHDIGJGN$$BKKOBBDEPFH @ RVA 0x33CA8C4

System_String_o * FCPAHDIGJGN__BKKOBBDEPFH(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  if ((DAT_04567e14 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e14 = 1;
  }
  return StringLiteral_1/*""*/;
}


// ===== private void BGFEFMHKJLO(string KKJPPDNKGAI, int IKJIPFLDNGG)  [RVA 0x33CA904]
// FCPAHDIGJGN$$BGFEFMHKJLO @ RVA 0x33CA904

void FCPAHDIGJGN__BGFEFMHKJLO
               (FCPAHDIGJGN_o *__this,System_String_o *KKJPPDNKGAI,int32_t IKJIPFLDNGG,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_34;
  
  local_34 = IKJIPFLDNGG;
  if ((DAT_04567e15 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9835/*"OnAchievementProgess id = "*/);
    FUN_01bab630(&StringLiteral_512/*" progress = "*/);
    DAT_04567e15 = 1;
  }
  pSVar1 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (StringLiteral_9835/*"OnAchievementProgess id = "*/,KKJPPDNKGAI,StringLiteral_512/*" progress = "*/,pSVar1,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== private void BCHMNCFEGNO(bool LNGMMFHGAOC)  [RVA 0x33CA9A8]
// FCPAHDIGJGN$$BCHMNCFEGNO @ RVA 0x33CA9A8

void FCPAHDIGJGN__BCHMNCFEGNO(FCPAHDIGJGN_o *__this,bool LNGMMFHGAOC,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567e16 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_3644/*"CB_Authenticate, authed = "*/);
    DAT_04567e16 = 1;
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_3644/*"CB_Authenticate, authed = "*/,pSVar1,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x33CAA4C]
// FCPAHDIGJGN$$.ctor @ RVA 0x33CAA4C

void FCPAHDIGJGN___ctor(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e17 & 1) == 0) {
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04567e17 = 1;
    method = extraout_x1;
  }
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo,method);
  }
  NHJCFGACFDF___ctor((NHJCFGACFDF_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override int KFHNHPGBJBH()  [RVA 0x33CAAA4]
// FCPAHDIGJGN$$KFHNHPGBJBH @ RVA 0x33CAAA4

int32_t FCPAHDIGJGN__KFHNHPGBJBH(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public override void FNGMPMDBIKB()  [RVA 0x33CAAAC]
// FCPAHDIGJGN$$FNGMPMDBIKB @ RVA 0x33CAAAC

void FCPAHDIGJGN__FNGMPMDBIKB(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  if ((DAT_04567e18 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12125/*"SignOut"*/);
                    /* try { // try from 034caad8 to 035cab7b has its CatchHandler @ 034caad8
                       catch() { ... } // from try @ 034caad8 with catch @ 034caad8
                       catch() { ... } // from try @ 034cabbc with catch @ 034caad8
                       catch() { ... } // from try @ 034cabf4 with catch @ 034caad8
                       catch() { ... } // from try @ 034cac28 with catch @ 034caad8
                       catch() { ... } // from try @ 034cac58 with catch @ 034caad8 */
    DAT_04567e18 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12125/*"SignOut"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override string PLPICDIFHHG()  [RVA 0x33CAAF8]
// FCPAHDIGJGN$$PLPICDIFHHG @ RVA 0x33CAAF8

System_String_o * FCPAHDIGJGN__PLPICDIFHHG(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  if ((DAT_04567e19 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5545/*"EMULATOR"*/);
    DAT_04567e19 = 1;
  }
  return StringLiteral_5545/*"EMULATOR"*/;
}


// ===== public override void GIENGNEGHPJ()  [RVA 0x33CAB38]
// FCPAHDIGJGN$$GIENGNEGHPJ @ RVA 0x33CAB38

void FCPAHDIGJGN__GIENGNEGHPJ(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  if ((DAT_04567e1a & 1) == 0) {
    FUN_01bab630(&StringLiteral_7514/*"Init"*/);
    DAT_04567e1a = 1;
  }
                    /* try { // try from 034cab7c to 035cab83 has its CatchHandler @ 034cac0c */
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_7514/*"Init"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override bool HCDIBNJMKLH()  [RVA 0x33CAB84]
// FCPAHDIGJGN$$HCDIBNJMKLH @ RVA 0x33CAB84

bool FCPAHDIGJGN__HCDIBNJMKLH(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public override void KNLFICNFHBE()  [RVA 0x33CAB8C]
// FCPAHDIGJGN$$KNLFICNFHBE @ RVA 0x33CAB8C

void FCPAHDIGJGN__KNLFICNFHBE(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
                    /* try { // try from 034cab90 to 035cab9b has its CatchHandler @ 034cabfc */
                    /* try { // try from 034caba0 to 035caba7 has its CatchHandler @ 034cac00 */
  if ((DAT_04567e1b & 1) == 0) {
                    /* try { // try from 034cabb0 to 035cabbb has its CatchHandler @ 034cabf8 */
    FUN_01bab630(&StringLiteral_12073/*"ShowAchievements"*/);
                    /* try { // try from 034cabbc to 035cabeb has its CatchHandler @ 034caad8 */
    DAT_04567e1b = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12073/*"ShowAchievements"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override string ADBBGOBBAJA()  [RVA 0x33CABD8]
// FCPAHDIGJGN$$ADBBGOBBAJA @ RVA 0x33CABD8

System_String_o * FCPAHDIGJGN__ADBBGOBBAJA(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
                    /* try { // try from 034cabec to 035cabef has its CatchHandler @ 034cac08 */
                    /* try { // try from 034cabf0 to 035cabf3 has its CatchHandler @ 034cac04 */
  if ((DAT_04567e1c & 1) == 0) {
                    /* try { // try from 034cabf4 to 035cac23 has its CatchHandler @ 034caad8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cabb0 with catch @ 034cabf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cab90 with catch @ 034cabfc
                        */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034caba0 with catch @ 034cac00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cabf0 with catch @ 034cac04
                        */
    DAT_04567e1c = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cabec with catch @ 034cac08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cab7c with catch @ 034cac0c
                        */
  return StringLiteral_1/*""*/;
}


// ===== public override bool NCLOHJCDCEJ()  [RVA 0x33CAC18]
// FCPAHDIGJGN$$NCLOHJCDCEJ @ RVA 0x33CAC18

bool FCPAHDIGJGN__NCLOHJCDCEJ(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public override void CLKGKNCGJID(string KKJPPDNKGAI, int HFELHFCLPJE, int PKEAOHMFMFD, bool HLJOHNIDBDM = True)  [RVA 0x33CAC20]
// FCPAHDIGJGN$$CLKGKNCGJID @ RVA 0x33CAC20

void FCPAHDIGJGN__CLKGKNCGJID
               (FCPAHDIGJGN_o *__this,System_String_o *KKJPPDNKGAI,int32_t HFELHFCLPJE,
               int32_t PKEAOHMFMFD,bool HLJOHNIDBDM,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  int32_t local_28;
  int32_t iStack_24;
  
                    /* try { // try from 034cac24 to 035cac27 has its CatchHandler @ 034cac48 */
                    /* try { // try from 034cac28 to 035cac4f has its CatchHandler @ 034caad8 */
                    /* catch() { ... } // from try @ 034cac24 with catch @ 034cac48 */
  local_28 = PKEAOHMFMFD;
  iStack_24 = HFELHFCLPJE;
  if ((DAT_04567e1d & 1) == 0) {
                    /* try { // try from 034cac50 to 035cac57 has its CatchHandler @ 034cac6c */
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 034cac58 to 035cac63 has its CatchHandler @ 034caad8 */
    FUN_01bab630(&StringLiteral_232/*" , currentStep = "*/);
                    /* try { // try from 034cac64 to 035cac6b has its CatchHandler @ 034cac6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cac50 with catch @ 034cac6c
                       catch(type#2 @ 00000000) { ... } // from try @ 034cac64 with catch @ 034cac6c
                        */
    FUN_01bab630(&StringLiteral_233/*" , maxSteps = "*/);
    FUN_01bab630(&StringLiteral_2719/*"AchievementProgress id = "*/);
    DAT_04567e1d = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2719/*"AchievementProgress id = "*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = KKJPPDNKGAI;
        thunk_FUN_01c20e04(values->m_Items + 1,KKJPPDNKGAI);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_232/*" , currentStep = "*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar1 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
                    /* try { // try from 034cad1c to 035cadd3 has its CatchHandler @ 034cad1c
                       catch() { ... } // from try @ 034cad1c with catch @ 034cad1c
                       catch() { ... } // from try @ 034cadfc with catch @ 034cad1c
                       catch() { ... } // from try @ 034cae64 with catch @ 034cad1c
                       catch() { ... } // from try @ 034caeac with catch @ 034cad1c */
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_233/*" , maxSteps = "*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string KCHJCGEMCGE()  [RVA 0x33CADB4]
// FCPAHDIGJGN$$KCHJCGEMCGE @ RVA 0x33CADB4

System_String_o * FCPAHDIGJGN__KCHJCGEMCGE(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  if ((DAT_04567e1e & 1) == 0) {
                    /* try { // try from 034cadd4 to 035caddb has its CatchHandler @ 034cae48 */
    FUN_01bab630(&StringLiteral_5693/*"Emulator"*/);
    DAT_04567e1e = 1;
  }
  return StringLiteral_5693/*"Emulator"*/;
}


// ===== public override void OPAJGJEKAPD(string OGPGLGPMEPD, bool HLJOHNIDBDM = True)  [RVA 0x33CADF4]
// FCPAHDIGJGN$$OPAJGJEKAPD @ RVA 0x33CADF4

void FCPAHDIGJGN__OPAJGJEKAPD
               (FCPAHDIGJGN_o *__this,System_String_o *OGPGLGPMEPD,bool HLJOHNIDBDM,
               MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
                    /* try { // try from 034cadf4 to 035cadfb has its CatchHandler @ 034cae44 */
                    /* try { // try from 034cadfc to 035cae5f has its CatchHandler @ 034cad1c */
  if ((DAT_04567e1f & 1) == 0) {
    FUN_01bab630(&StringLiteral_14514/*"UnlockAchievement "*/,OGPGLGPMEPD,HLJOHNIDBDM);
    DAT_04567e1f = 1;
  }
  JLNPKGGFFDD = System_String__Concat(StringLiteral_14514/*"UnlockAchievement "*/,OGPGLGPMEPD,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cadf4 with catch @ 034cae44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cadd4 with catch @ 034cae48
                        */
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== private void IKFHKGFDHBP(string OGPGLGPMEPD)  [RVA 0x33CAE5C]
// FCPAHDIGJGN$$IKFHKGFDHBP @ RVA 0x33CAE5C

void FCPAHDIGJGN__IKFHKGFDHBP(FCPAHDIGJGN_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  
                    /* try { // try from 034cae60 to 035cae63 has its CatchHandler @ 034cae94 */
                    /* try { // try from 034cae64 to 035caea3 has its CatchHandler @ 034cad1c */
  if ((DAT_04567e20 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3643/*"CB_AchievementUnlocked, id = "*/);
                    /* catch() { ... } // from try @ 034cae60 with catch @ 034cae94 */
    DAT_04567e20 = 1;
  }
                    /* try { // try from 034caea4 to 035caeab has its CatchHandler @ 034caec0 */
  JLNPKGGFFDD = System_String__Concat(StringLiteral_3643/*"CB_AchievementUnlocked, id = "*/,OGPGLGPMEPD,(MethodInfo *)0x0);
                    /* try { // try from 034caeac to 035caeb7 has its CatchHandler @ 034cad1c */
                    /* try { // try from 034caeb8 to 035caebf has its CatchHandler @ 034caec0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034caea4 with catch @ 034caec0
                       catch(type#2 @ 00000000) { ... } // from try @ 034caeb8 with catch @ 034caec0
                        */
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== public override bool NCJLBDIMPED()  [RVA 0x33CAEC4]
// FCPAHDIGJGN$$NCJLBDIMPED @ RVA 0x33CAEC4

bool FCPAHDIGJGN__NCJLBDIMPED(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public override void ECDBHGCNKBO(byte[] IMMNELPBGIF, bool BHPEJDOPLFD = True)  [RVA 0x33CAECC]
// FCPAHDIGJGN$$ECDBHGCNKBO @ RVA 0x33CAECC

void FCPAHDIGJGN__ECDBHGCNKBO
               (FCPAHDIGJGN_o *__this,System_Byte_array *IMMNELPBGIF,bool BHPEJDOPLFD,
               MethodInfo *method)

{
  if ((DAT_04567e21 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11695/*"SaveDump"*/,IMMNELPBGIF,BHPEJDOPLFD);
    DAT_04567e21 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_11695/*"SaveDump"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override void CLNAOMIIBLH()  [RVA 0x33CAF18]
// FCPAHDIGJGN$$CLNAOMIIBLH @ RVA 0x33CAF18

void FCPAHDIGJGN__CLNAOMIIBLH(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  if ((DAT_04567e22 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    DAT_04567e22 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
  return;
}


// ===== public override FJLAMDKMIHD MEHFGJDCBDP()  [RVA 0x33CAF64]
// FCPAHDIGJGN$$MEHFGJDCBDP @ RVA 0x33CAF64

int32_t FCPAHDIGJGN__MEHFGJDCBDP(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  return 2;
}


// ===== public override void KJFENNDOBOB(Action<bool> BLMFLPJJMPF)  [RVA 0x33CAF6C]
// FCPAHDIGJGN$$KJFENNDOBOB @ RVA 0x33CAF6C

void FCPAHDIGJGN__KJFENNDOBOB
               (FCPAHDIGJGN_o *__this,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  if ((DAT_04567e23 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12124/*"SignIn"*/);
    DAT_04567e23 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12124/*"SignIn"*/,(MethodInfo *)0x0);
  if (BLMFLPJJMPF != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034cafd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,0,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
  return;
}


// ===== public override void FOGOMNAOMBD()  [RVA 0x33CAFEC]
// FCPAHDIGJGN$$FOGOMNAOMBD @ RVA 0x33CAFEC

void FCPAHDIGJGN__FOGOMNAOMBD(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void KILLFKNHDAO(IAchievement[] GHAAKPDHIJJ)  [RVA 0x33CAFF0]
// FCPAHDIGJGN$$KILLFKNHDAO @ RVA 0x33CAFF0

void FCPAHDIGJGN__KILLFKNHDAO
               (FCPAHDIGJGN_o *__this,UnityEngine_SocialPlatforms_IAchievement_array *GHAAKPDHIJJ,
               MethodInfo *method)

{
  FUN_03f93a38(DAT_04567e24);
  return;
}


// ===== public override void OLGAHLHLCKH()  [RVA 0x33CB03C]
// FCPAHDIGJGN$$OLGAHLHLCKH @ RVA 0x33CB03C

void FCPAHDIGJGN__OLGAHLHLCKH(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  
  if ((DAT_04567e25 & 1) == 0) {
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_11307/*"ResetAchievements"*/);
    DAT_04567e25 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_11307/*"ResetAchievements"*/,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = NHJCFGACFDF_TypeInfo->static_fields->HHENPENBNLD;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034cb0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,1,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HEHBOCDCKEN()  [RVA 0x33CB0DC]
// FCPAHDIGJGN$$HEHBOCDCKEN @ RVA 0x33CB0DC

void FCPAHDIGJGN__HEHBOCDCKEN(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
                    /* try { // try from 034cb0dc to 035cb313 has its CatchHandler @ 034cb0dc
                       catch() { ... } // from try @ 034cb0dc with catch @ 034cb0dc
                       catch() { ... } // from try @ 034cb3d4 with catch @ 034cb0dc
                       catch() { ... } // from try @ 034cb4fc with catch @ 034cb0dc
                       catch() { ... } // from try @ 034cb504 with catch @ 034cb0dc
                       catch() { ... } // from try @ 034cb5c0 with catch @ 034cb0dc */
  if ((DAT_04567e26 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8541/*"LoadDump"*/);
    DAT_04567e26 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_8541/*"LoadDump"*/,(MethodInfo *)0x0);
  return;
}

