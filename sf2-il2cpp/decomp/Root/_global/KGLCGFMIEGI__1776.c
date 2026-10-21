// TypeDefIndex 1776
// Namespace: 
// public class KGLCGFMIEGI : CPABHCDGLPI
// Fields:
//   private Action<bool> IJLLOMCHLBP; // 0x10
//   private Action<bool> NEMMLKGAOFE; // 0x18
//   private static JANICNLKKBO <FBNKBJAJBJF>k__BackingField; // 0x0
//   private bool ICLCFGFJDKJ; // 0x20
//   private InitDelegate BPONHHDHOAB; // 0x28

// ===== public void CKJKNCFFBME(string ANIALDFEENL, Dictionary<string, object> OKBIKHHKOEN)  [RVA 0x31EAD34]
// KGLCGFMIEGI$$CKJKNCFFBME @ RVA 0x31EAD34

void KGLCGFMIEGI__CKJKNCFFBME
               (KGLCGFMIEGI_o *__this,System_String_o *ANIALDFEENL,
               System_Collections_Generic_Dictionary_string__object__o *OKBIKHHKOEN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Facebook_Unity_InitDelegate_o *MEBBNHCIEOC;
  MethodInfo *method_00;
  void **ppvVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04566d96 & 1) == 0) {
    FUN_01bab630(&Method_KGLCGFMIEGI_DFPOOHIJALM_CHHOFMJCADJ__);
    FUN_01bab630(&KGLCGFMIEGI_DFPOOHIJALM_TypeInfo);
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    DAT_04566d96 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_DFPOOHIJALM_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(pIVar2 + 1,__this);
    ppvVar3 = &pIVar2[1].monitor;
    *ppvVar3 = ANIALDFEENL;
    thunk_FUN_01c20e04(ppvVar3,ANIALDFEENL);
    pIVar2 = pIVar2 + 2;
    pIVar2->klass = (Il2CppClass *)OKBIKHHKOEN;
    auVar4 = thunk_FUN_01c20e04(pIVar2,OKBIKHHKOEN);
    bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar4._0_8_,auVar4._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__FIOINEAEEHP
                ((KGLCGFMIEGI_o *)0x1,*ppvVar3,
                 (System_Collections_Generic_Dictionary_string__object__o *)pIVar2->klass,method);
      return;
    }
    MEBBNHCIEOC = (Facebook_Unity_InitDelegate_o *)
                  thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
    method_00 = Method_KGLCGFMIEGI_DFPOOHIJALM_CHHOFMJCADJ__;
    Facebook_Unity_InitDelegate___ctor();
    KGLCGFMIEGI__GIMAJOGGBHM(__this,MEBBNHCIEOC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GLICONIIINB()  [RVA 0x31EAE4C]
// KGLCGFMIEGI$$GLICONIIINB @ RVA 0x31EAE4C

bool KGLCGFMIEGI__GLICONIIINB(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d97 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566d97 = 1;
    method = extraout_x1;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Facebook_Unity_FB_TypeInfo,method);
  }
  bVar1 = Facebook_Unity_FB__get_IsInitialized((MethodInfo *)0x0);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x31EB0A0]
// KGLCGFMIEGI$$.ctor @ RVA 0x31EB0A0

void KGLCGFMIEGI___ctor(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void CHMGIIMLANF()  [RVA 0x31EB0A8]
// KGLCGFMIEGI$$CHMGIIMLANF @ RVA 0x31EB0A8

void KGLCGFMIEGI__CHMGIIMLANF(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d98 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566d98 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).ICLCFGFJDKJ != false) {
    if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Facebook_Unity_FB_TypeInfo,method);
    }
    Facebook_Unity_FB__ActivateApp((MethodInfo *)0x0);
    (__this->fields).ICLCFGFJDKJ = true;
  }
  return;
}


// ===== private void JHOAGFPCIPM(LLIHPIMPDLC NCMNKCDJPAA)  [RVA 0x31EB1C8]
// KGLCGFMIEGI$$JHOAGFPCIPM @ RVA 0x31EB1C8

void KGLCGFMIEGI__JHOAGFPCIPM(KGLCGFMIEGI_o *__this,LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Facebook_Unity_FacebookDelegate_ILoginResult__o *callback;
  void **ppvVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04566d99 & 1) == 0) {
    FUN_01bab630(&Method_KGLCGFMIEGI_CDHBBIJMDPK_JKBGOLFFIFC__);
    FUN_01bab630(&KGLCGFMIEGI_CDHBBIJMDPK_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FacebookDelegate<ILoginResult>_TypeInfo);
    FUN_01bab630(&StringLiteral_8617/*"Login"*/);
    DAT_04566d99 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_CDHBBIJMDPK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = NCMNKCDJPAA;
    auVar3 = thunk_FUN_01c20e04(ppvVar2,NCMNKCDJPAA);
    bVar1 = KGLCGFMIEGI__EDBFDLIIHGI(auVar3._0_8_,auVar3._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__ENFBBKEOLCL(__this,*ppvVar2,method);
      return;
    }
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8617/*"Login"*/,(MethodInfo *)0x0);
    callback = (Facebook_Unity_FacebookDelegate_ILoginResult__o *)
               thunk_FUN_01bda818(Facebook_Unity_FacebookDelegate<ILoginResult>_TypeInfo);
    Facebook_Unity_FacebookDelegate<object>___ctor();
    if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Facebook_Unity_FB__LogInWithReadPermissions
              ((System_Collections_Generic_IEnumerable_string__o *)0x0,callback,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIMAJOGGBHM()  [RVA 0x31EB384]
// KGLCGFMIEGI$$GIMAJOGGBHM @ RVA 0x31EB384

void KGLCGFMIEGI__GIMAJOGGBHM(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  KGLCGFMIEGI__GIMAJOGGBHM(__this,(Facebook_Unity_InitDelegate_o *)0x0,in_x2);
  return;
}


// ===== private void BHAMLOOLMMP()  [RVA 0x31EB38C]
// KGLCGFMIEGI$$BHAMLOOLMMP @ RVA 0x31EB38C

void KGLCGFMIEGI__BHAMLOOLMMP(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04566d9a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FacebookDelegate<IGraphResult>_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_KFEJPJDJLMA__);
    FUN_01bab630(&StringLiteral_6284/*"FetchUserData"*/);
    FUN_01bab630(&StringLiteral_1532/*"/me?fields=id,email"*/);
    DAT_04566d9a = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_6284/*"FetchUserData"*/,(MethodInfo *)0x0);
  thunk_FUN_01bda818(Facebook_Unity_FacebookDelegate<IGraphResult>_TypeInfo);
  Facebook_Unity_FacebookDelegate<object>___ctor();
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Facebook_Unity_FB__API();
  return;
}


// ===== public void NPODDNIHKBO(LLIHPIMPDLC NCMNKCDJPAA)  [RVA 0x31EB4C0]
// KGLCGFMIEGI$$NPODDNIHKBO @ RVA 0x31EB4C0

void KGLCGFMIEGI__NPODDNIHKBO(KGLCGFMIEGI_o *__this,LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Facebook_Unity_InitDelegate_o *MEBBNHCIEOC;
  MethodInfo *method_00;
  void **ppvVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04566d9b & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_JJAOIBKKJJO_DFICFAGPMHF__);
    FUN_01bab630(&KGLCGFMIEGI_JJAOIBKKJJO_TypeInfo);
    DAT_04566d9b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_JJAOIBKKJJO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = NCMNKCDJPAA;
    auVar3 = thunk_FUN_01c20e04(ppvVar2,NCMNKCDJPAA);
    bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar3._0_8_,auVar3._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__JHOAGFPCIPM(__this,*ppvVar2,method);
      return;
    }
    MEBBNHCIEOC = (Facebook_Unity_InitDelegate_o *)
                  thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
    method_00 = Method_KGLCGFMIEGI_JJAOIBKKJJO_DFICFAGPMHF__;
    Facebook_Unity_InitDelegate___ctor();
    KGLCGFMIEGI__GIMAJOGGBHM(__this,MEBBNHCIEOC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EDBFDLIIHGI()  [RVA 0x31EB314]
// KGLCGFMIEGI$$EDBFDLIIHGI @ RVA 0x31EB314

bool KGLCGFMIEGI__EDBFDLIIHGI(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d9c & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566d9c = 1;
    method = extraout_x1;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Facebook_Unity_FB_TypeInfo,method);
  }
  bVar1 = Facebook_Unity_FB__get_IsLoggedIn((MethodInfo *)0x0);
  return bVar1;
}


// ===== public void OIFHOGLBCOL()  [RVA 0x31EB5C0]
// KGLCGFMIEGI$$OIFHOGLBCOL @ RVA 0x31EB5C0

void KGLCGFMIEGI__OIFHOGLBCOL(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void BDMBCINIFFB(float IDPMJOKDHNP, string OAOLCGAIILM, Dictionary<string, object> OKBIKHHKOEN)  [RVA 0x31EB5C4]
// KGLCGFMIEGI$$BDMBCINIFFB @ RVA 0x31EB5C4

void KGLCGFMIEGI__BDMBCINIFFB
               (KGLCGFMIEGI_o *__this,float IDPMJOKDHNP,System_String_o *OAOLCGAIILM,
               System_Collections_Generic_Dictionary_string__object__o *OKBIKHHKOEN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Facebook_Unity_InitDelegate_o *MEBBNHCIEOC;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04566d9d & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_JHIOKJAHDND_HBGOIPILCJC__);
    FUN_01bab630(&KGLCGFMIEGI_JHIOKJAHDND_TypeInfo);
    DAT_04566d9d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_JHIOKJAHDND_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(float *)&__this_00[1].monitor = IDPMJOKDHNP;
    __this_00[2].klass = (Il2CppClass *)OAOLCGAIILM;
    thunk_FUN_01c20e04(__this_00 + 2,OAOLCGAIILM);
    __this_00[2].monitor = OKBIKHHKOEN;
    auVar2 = thunk_FUN_01c20e04(&__this_00[2].monitor,OKBIKHHKOEN);
    bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar2._0_8_,auVar2._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__LLMHKMEEMMH
                ((KGLCGFMIEGI_o *)0x1,*(float *)&__this_00[1].monitor,
                 (System_String_o *)__this_00[2].klass,__this_00[2].monitor,method);
      return;
    }
    MEBBNHCIEOC = (Facebook_Unity_InitDelegate_o *)
                  thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
    method_00 = Method_KGLCGFMIEGI_JHIOKJAHDND_HBGOIPILCJC__;
    Facebook_Unity_InitDelegate___ctor();
    KGLCGFMIEGI__GIMAJOGGBHM(__this,MEBBNHCIEOC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ILGCEJBAOHG(LLIHPIMPDLC FKILEEEIABI)  [RVA 0x31EB760]
// KGLCGFMIEGI$$ILGCEJBAOHG @ RVA 0x31EB760

void KGLCGFMIEGI__ILGCEJBAOHG(KGLCGFMIEGI_o *__this,LLIHPIMPDLC_o *FKILEEEIABI,MethodInfo *method)

{
  System_String_o *linkDescription;
  System_String_o *linkName;
  bool bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  System_Uri_o *__this_00;
  System_Uri_o *__this_01;
  Facebook_Unity_FacebookDelegate_IShareResult__o *callback;
  System_Action_bool__o *pSVar3;
  System_String_o *toId;
  System_String_o *pSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = FKILEEEIABI;
  auVar5._0_8_ = __this;
  if ((DAT_04566d9e & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FacebookDelegate<IShareResult>_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_DIJCCOKNDLN__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
    FUN_01bab630(&StringLiteral_861/*"', Caption='"*/);
    FUN_01bab630(&StringLiteral_866/*"', Description='"*/);
    FUN_01bab630(&StringLiteral_873/*"', Name='"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_874/*"', Picture='"*/);
    auVar5 = FUN_01bab630(&StringLiteral_10371/*"Post: Link='"*/);
    DAT_04566d9e = 1;
  }
  if (FKILEEEIABI == (LLIHPIMPDLC_o *)0x0) {
    pSVar3 = (__this->fields).IJLLOMCHLBP;
    if (pSVar3 == (System_Action_bool__o *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x032ebafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,0,(pSVar3->fields).super.super.method);
    return;
  }
  bVar1 = KGLCGFMIEGI__EDBFDLIIHGI(auVar5._0_8_,auVar5._8_8_);
  if (!bVar1) {
    KGLCGFMIEGI__NPODDNIHKBO(__this,FKILEEEIABI,method);
    return;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xb);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_10371/*"Post: Link='"*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (FKILEEEIABI->fields).NPNLDGIBGMP;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_873/*"', Name='"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (FKILEEEIABI->fields).JIJLBFGKNJK;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_861/*"', Caption='"*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = (FKILEEEIABI->fields).OCPLOFNKMHH;
                thunk_FUN_01c20e04(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_866/*"', Description='"*/;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = (FKILEEEIABI->fields).BPCADJLKKGA;
                    thunk_FUN_01c20e04(values->m_Items + 7);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = StringLiteral_874/*"', Picture='"*/;
                      thunk_FUN_01c20e04(values->m_Items + 8);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = (FKILEEEIABI->fields).FNPDDNFLHFK;
                        thunk_FUN_01c20e04(values->m_Items + 9);
                        if (10 < (uint)values->max_length) {
                          values->m_Items[10] = StringLiteral_802/*"'"*/;
                          thunk_FUN_01c20e04();
                          pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
                          pSVar2 = (FKILEEEIABI->fields).NPNLDGIBGMP;
                          toId = string_TypeInfo->static_fields->Empty;
                          __this_00 = (System_Uri_o *)thunk_FUN_01bda818(System_Uri_TypeInfo);
                          System_Uri___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
                          pSVar2 = (FKILEEEIABI->fields).OCPLOFNKMHH;
                          linkDescription = (FKILEEEIABI->fields).BPCADJLKKGA;
                          pSVar4 = (FKILEEEIABI->fields).FNPDDNFLHFK;
                          linkName = (FKILEEEIABI->fields).JIJLBFGKNJK;
                          __this_01 = (System_Uri_o *)thunk_FUN_01bda818(System_Uri_TypeInfo);
                          System_Uri___ctor(__this_01,pSVar4,(MethodInfo *)0x0);
                          pSVar4 = string_TypeInfo->static_fields->Empty;
                          callback = (Facebook_Unity_FacebookDelegate_IShareResult__o *)
                                     thunk_FUN_01bda818(
                                                  Facebook_Unity_FacebookDelegate<IShareResult>_TypeInfo
                                                  );
                          Facebook_Unity_FacebookDelegate<object>___ctor();
                          if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          Facebook_Unity_FB__FeedShare
                                    (toId,__this_00,linkName,pSVar2,linkDescription,__this_01,pSVar4
                                     ,callback,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHEBEPEJEPE(ILoginResult HPACPFLKHPK, LLIHPIMPDLC NCMNKCDJPAA)  [RVA 0x31EBB50]
// KGLCGFMIEGI$$LHEBEPEJEPE @ RVA 0x31EBB50

void KGLCGFMIEGI__LHEBEPEJEPE
               (KGLCGFMIEGI_o *__this,Facebook_Unity_ILoginResult_o *HPACPFLKHPK,
               LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  System_String_o *str1;
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Facebook_Unity_ILoginResult_c *pFVar7;
  System_Action_bool__o *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04566d9f & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_IResult_TypeInfo);
    FUN_01bab630(&StringLiteral_588/*"!"*/);
    FUN_01bab630(&StringLiteral_14507/*"UnknownError"*/);
    FUN_01bab630(&StringLiteral_8621/*"LoginCallback: failed - "*/);
    FUN_01bab630(&StringLiteral_8620/*"LoginCallback: cancelled!"*/);
    FUN_01bab630(&StringLiteral_8622/*"LoginCallback: success!"*/);
    DAT_04566d9f = 1;
  }
  if (HPACPFLKHPK == (Facebook_Unity_ILoginResult_o *)0x0) {
    pSVar6 = (System_String_o *)0x0;
    pSVar5 = StringLiteral_8621/*"LoginCallback: failed - "*/;
  }
  else {
    pFVar7 = HPACPFLKHPK->klass;
    uVar1._0_1_ = (pFVar7->_2).rank;
    uVar1._1_1_ = (pFVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pFVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar4 = pFVar7->vtable + *piVar10;
          goto LAB_032ebc30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,0);
LAB_032ebc30:
    pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
    bVar3 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
    pSVar5 = StringLiteral_8621/*"LoginCallback: failed - "*/;
    if (bVar3) {
      bVar3 = KGLCGFMIEGI__EDBFDLIIHGI((KGLCGFMIEGI_o *)0x1,method_00);
      if (bVar3) {
        method_01 = (MethodInfo *)0x0;
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8622/*"LoginCallback: success!"*/,(MethodInfo *)0x0);
        KGLCGFMIEGI__ENFBBKEOLCL(__this,NCMNKCDJPAA,method_01);
        return;
      }
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8620/*"LoginCallback: cancelled!"*/,(MethodInfo *)0x0);
      goto LAB_032ebd3c;
    }
    pFVar7 = HPACPFLKHPK->klass;
    uVar2._0_1_ = (pFVar7->_2).rank;
    uVar2._1_1_ = (pFVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pFVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar4 = pFVar7->vtable + *piVar10;
          goto LAB_032ebcf4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,0);
LAB_032ebcf4:
    pSVar6 = (System_String_o *)(*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
  }
  str1 = StringLiteral_14507/*"UnknownError"*/;
  if (pSVar6 != (System_String_o *)0x0) {
    str1 = pSVar6;
  }
  pSVar5 = System_String__Concat(pSVar5,str1,StringLiteral_588/*"!"*/,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
LAB_032ebd3c:
  pSVar8 = (__this->fields).NEMMLKGAOFE;
  if (pSVar8 != (System_Action_bool__o *)0x0) {
    (*(code *)(pSVar8->fields).super.super.invoke_impl)
              ((pSVar8->fields).super.super.method_code,0,(pSVar8->fields).super.super.method);
  }
  if ((NCMNKCDJPAA != (LLIHPIMPDLC_o *)0x0) &&
     (pSVar8 = (__this->fields).IJLLOMCHLBP, pSVar8 != (System_Action_bool__o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x032ebd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar8->fields).super.super.invoke_impl)
              ((pSVar8->fields).super.super.method_code,0,(pSVar8->fields).super.super.method);
    return;
  }
  return;
}


// ===== private static void PMDPIBAJAAA(JANICNLKKBO CJNHFNHJHPE)  [RVA 0x31EBD94]
// KGLCGFMIEGI$$PMDPIBAJAAA @ RVA 0x31EBD94

void KGLCGFMIEGI__PMDPIBAJAAA(JANICNLKKBO_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566da0 & 1) == 0) {
    FUN_01bab630(&KGLCGFMIEGI_TypeInfo);
    DAT_04566da0 = 1;
  }
  KGLCGFMIEGI_TypeInfo->static_fields->_FBNKBJAJBJF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(KGLCGFMIEGI_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== private void LLMHKMEEMMH(float IDPMJOKDHNP, string OAOLCGAIILM, Dictionary<string, object> OKBIKHHKOEN)  [RVA 0x31EB6E8]
// KGLCGFMIEGI$$LLMHKMEEMMH @ RVA 0x31EB6E8

void KGLCGFMIEGI__LLMHKMEEMMH
               (KGLCGFMIEGI_o *__this,float IDPMJOKDHNP,System_String_o *OAOLCGAIILM,
               System_Collections_Generic_Dictionary_string__object__o *OKBIKHHKOEN,
               MethodInfo *method)

{
  if ((DAT_04566da1 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566da1 = 1;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Facebook_Unity_FB__LogPurchase(IDPMJOKDHNP,OAOLCGAIILM,OKBIKHHKOEN,(MethodInfo *)0x0);
  return;
}


// ===== private void FIOINEAEEHP(string ANIALDFEENL, Dictionary<string, object> OKBIKHHKOEN)  [RVA 0x31EB034]
// KGLCGFMIEGI$$FIOINEAEEHP @ RVA 0x31EB034

void KGLCGFMIEGI__FIOINEAEEHP
               (KGLCGFMIEGI_o *__this,System_String_o *ANIALDFEENL,
               System_Collections_Generic_Dictionary_string__object__o *OKBIKHHKOEN,
               MethodInfo *method)

{
  if ((DAT_04566da2 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_04566da2 = 1;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Facebook_Unity_FB__LogAppEvent
            (ANIALDFEENL,(System_Nullable_float__o)0x0,OKBIKHHKOEN,(MethodInfo *)0x0);
  return;
}


// ===== public void GIMAJOGGBHM(InitDelegate MEBBNHCIEOC)  [RVA 0x31EAE9C]
// KGLCGFMIEGI$$GIMAJOGGBHM @ RVA 0x31EAE9C

void KGLCGFMIEGI__GIMAJOGGBHM
               (KGLCGFMIEGI_o *__this,Facebook_Unity_InitDelegate_o *MEBBNHCIEOC,MethodInfo *method)

{
  bool bVar1;
  Facebook_Unity_InitDelegate_o **ppFVar2;
  Facebook_Unity_InitDelegate_o *onInitComplete;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = MEBBNHCIEOC;
  auVar3._0_8_ = __this;
  if ((DAT_04566da3 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_PKLMDBAFDMH__);
    auVar3 = FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_04566da3 = 1;
  }
  bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar3._0_8_,auVar3._8_8_);
  if (bVar1) {
    KGLCGFMIEGI__PKLMDBAFDMH(__this,method_00);
    return;
  }
  ppFVar2 = &(__this->fields).BPONHHDHOAB;
  *ppFVar2 = MEBBNHCIEOC;
  thunk_FUN_01c20e04(ppFVar2,MEBBNHCIEOC);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  onInitComplete =
       (Facebook_Unity_InitDelegate_o *)thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
  Facebook_Unity_InitDelegate___ctor();
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Facebook_Unity_FB__Init
            (onInitComplete,(Facebook_Unity_HideUnityDelegate_o *)0x0,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator LMFDDFLBEOH()  [RVA 0x31EBF2C]
// KGLCGFMIEGI$$LMFDDFLBEOH @ RVA 0x31EBF2C

System_Collections_IEnumerator_o *
KGLCGFMIEGI__LMFDDFLBEOH(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566da4 & 1) == 0) {
    FUN_01bab630(&KGLCGFMIEGI_BGGICOOKNAL_TypeInfo);
    DAT_04566da4 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_BGGICOOKNAL_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void ENFBBKEOLCL(LLIHPIMPDLC NCMNKCDJPAA)  [RVA 0x31EB364]
// KGLCGFMIEGI$$ENFBBKEOLCL @ RVA 0x31EB364

void KGLCGFMIEGI__ENFBBKEOLCL(KGLCGFMIEGI_o *__this,LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  if (NCMNKCDJPAA != (LLIHPIMPDLC_o *)0x0) {
    KGLCGFMIEGI__ILGCEJBAOHG(__this,NCMNKCDJPAA,method);
    method_00 = extraout_x1;
  }
  KGLCGFMIEGI__BHAMLOOLMMP(__this,method_00);
  return;
}


// ===== public void ELFGOCNINDL(Action<bool> CJNHFNHJHPE)  [RVA 0x31EBFC0]
// KGLCGFMIEGI$$ELFGOCNINDL @ RVA 0x31EBFC0

void KGLCGFMIEGI__ELFGOCNINDL
               (KGLCGFMIEGI_o *__this,System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = CJNHFNHJHPE;
  auVar1._0_8_ = __this;
  if ((DAT_04566da5 & 1) == 0) {
    auVar1 = FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04566da5 = 1;
  }
  FUN_03f93a08(auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== public void HALBLILCJJD(Action<bool> CJNHFNHJHPE)  [RVA 0x31EC070]
// KGLCGFMIEGI$$HALBLILCJJD @ RVA 0x31EC070

void KGLCGFMIEGI__HALBLILCJJD
               (KGLCGFMIEGI_o *__this,System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o *a;
  
  if ((DAT_04566da6 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04566da6 = 1;
  }
  a = (__this->fields).IJLLOMCHLBP;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void BKGCAMPDMMC(Action<bool> CJNHFNHJHPE)  [RVA 0x31EC120]
// KGLCGFMIEGI$$BKGCAMPDMMC @ RVA 0x31EC120

void KGLCGFMIEGI__BKGCAMPDMMC
               (KGLCGFMIEGI_o *__this,System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *a;
  
  if ((DAT_04566da7 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04566da7 = 1;
  }
  ppSVar6 = &(__this->fields).NEMMLKGAOFE;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static JANICNLKKBO CGNDCABNKOO()  [RVA 0x31EC1D0]
// KGLCGFMIEGI$$CGNDCABNKOO @ RVA 0x31EC1D0

JANICNLKKBO_o * KGLCGFMIEGI__CGNDCABNKOO(MethodInfo *method)

{
  if ((DAT_04566da8 & 1) == 0) {
    FUN_01bab630(&KGLCGFMIEGI_TypeInfo);
    DAT_04566da8 = 1;
  }
  return KGLCGFMIEGI_TypeInfo->static_fields->_FBNKBJAJBJF_k__BackingField;
}


// ===== private void KFEJPJDJLMA(IGraphResult HPACPFLKHPK)  [RVA 0x31EC218]
// KGLCGFMIEGI$$KFEJPJDJLMA @ RVA 0x31EC218

void KGLCGFMIEGI__KFEJPJDJLMA
               (KGLCGFMIEGI_o *__this,Facebook_Unity_IGraphResult_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_Generic_Dictionary_string__object__o *OCMMDIHLKMH;
  JANICNLKKBO_o *__this_00;
  Il2CppObject *arg1;
  Facebook_Unity_IGraphResult_c *pFVar5;
  Facebook_Unity_AccessToken_o *pFVar6;
  System_Action_bool__o *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_String_o *pSVar10;
  
  if ((DAT_04566da9 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Facebook_Unity_IResult_TypeInfo);
    FUN_01bab630(&JANICNLKKBO_TypeInfo);
    FUN_01bab630(&StringLiteral_6285/*"FetchUserDataCallback"*/);
    FUN_01bab630(&StringLiteral_22367/*"{0}:\n{1}\n{2}"*/);
    DAT_04566da9 = 1;
  }
  if (HPACPFLKHPK != (Facebook_Unity_IGraphResult_o *)0x0) {
    pFVar5 = HPACPFLKHPK->klass;
    uVar2._0_1_ = (pFVar5->_2).rank;
    uVar2._1_1_ = (pFVar5->_2).minimumAlignment;
    uVar8 = (ulong)uVar2;
    if (uVar8 != 0) {
      piVar9 = &((pFVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar4 = pFVar5->vtable + (*piVar9 + 1);
          goto LAB_032ec2dc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,1);
LAB_032ec2dc:
    OCMMDIHLKMH = (System_Collections_Generic_Dictionary_string__object__o *)
                  (*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
    if (DAT_045604ea == '\0') {
      FUN_01bab630(&Facebook_Unity_AccessToken_TypeInfo);
      DAT_045604ea = '\x01';
    }
    pFVar6 = Facebook_Unity_AccessToken_TypeInfo->static_fields->_CurrentAccessToken_k__BackingField
    ;
    if (pFVar6 != (Facebook_Unity_AccessToken_o *)0x0) {
      pSVar10 = (pFVar6->fields)._TokenString_k__BackingField;
      __this_00 = (JANICNLKKBO_o *)thunk_FUN_01bda818(JANICNLKKBO_TypeInfo);
      if (OCMMDIHLKMH != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment
        ;
        if (((OCMMDIHLKMH->klass->_2).naturalAligment < bVar1) ||
           ((OCMMDIHLKMH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(OCMMDIHLKMH);
        }
      }
      JANICNLKKBO___ctor(__this_00,OCMMDIHLKMH,pSVar10,(MethodInfo *)0x0);
      if (DAT_04566e51 == '\0') {
        FUN_01bab630(&KGLCGFMIEGI_TypeInfo);
        DAT_04566e51 = '\x01';
      }
      KGLCGFMIEGI_TypeInfo->static_fields->_FBNKBJAJBJF_k__BackingField = __this_00;
      thunk_FUN_01c20e04(KGLCGFMIEGI_TypeInfo->static_fields,__this_00);
      pFVar5 = HPACPFLKHPK->klass;
      uVar3._0_1_ = (pFVar5->_2).rank;
      uVar3._1_1_ = (pFVar5->_2).minimumAlignment;
      uVar8 = (ulong)uVar3;
      if (uVar8 != 0) {
        piVar9 = &((pFVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
            pVVar4 = pFVar5->vtable + (*piVar9 + 2);
            goto LAB_032ec41c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,2);
LAB_032ec41c:
      arg1 = (Il2CppObject *)(*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
      if (DAT_04566e52 == '\0') {
        FUN_01bab630(&KGLCGFMIEGI_TypeInfo);
        DAT_04566e52 = '\x01';
      }
      pSVar10 = System_String__Format
                          (StringLiteral_22367/*"{0}:\n{1}\n{2}"*/,StringLiteral_6285/*"FetchUserDataCallback"*/,arg1,
                           (Il2CppObject *)
                           KGLCGFMIEGI_TypeInfo->static_fields->_FBNKBJAJBJF_k__BackingField,
                           (MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar10,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).NEMMLKGAOFE;
      if (pSVar7 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032ec4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,1,(pSVar7->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JHIACLFDACI(Action<bool> CJNHFNHJHPE)  [RVA 0x31EC4D8]
// KGLCGFMIEGI$$JHIACLFDACI @ RVA 0x31EC4D8

void KGLCGFMIEGI__JHIACLFDACI
               (KGLCGFMIEGI_o *__this,System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o *source;
  
  if ((DAT_04566daa & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_04566daa = 1;
  }
  source = (__this->fields).IJLLOMCHLBP;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ALBGFPHDHHH()  [RVA 0x31EC588]
// KGLCGFMIEGI$$ALBGFPHDHHH @ RVA 0x31EC588

void KGLCGFMIEGI__ALBGFPHDHHH(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 032ec5b0 to 033ec5b7 has its CatchHandler @ 032eca5c */
  if ((DAT_04566dab & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 032ec5cc to 033ec5d3 has its CatchHandler @ 032eca54 */
    FUN_01bab630(&StringLiteral_8662/*"Logout"*/);
    DAT_04566dab = 1;
  }
                    /* try { // try from 032ec5e0 to 033ec5e7 has its CatchHandler @ 032eca44 */
                    /* try { // try from 032ec5ec to 033ec5f3 has its CatchHandler @ 032eca48 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8662/*"Logout"*/,(MethodInfo *)0x0);
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032ec600 to 033ec62b has its CatchHandler @ 032eca58 */
  Facebook_Unity_FB__LogOut((MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = KGLCGFMIEGI__LMFDDFLBEOH(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
                    /* try { // try from 032ec62c to 033eca2f has its CatchHandler @ 032eaab8 */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_032ec678;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_032ec678:
                    /* WARNING: Could not recover jumptable at 0x032ec694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}


// ===== private void PKLMDBAFDMH()  [RVA 0x31EBDEC]
// KGLCGFMIEGI$$PKLMDBAFDMH @ RVA 0x31EBDEC

void KGLCGFMIEGI__PKLMDBAFDMH(KGLCGFMIEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  Facebook_Unity_InitDelegate_o *pFVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566dac & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_7537/*"InitializeCallback: failed to initialize the Facebook SDK!"*/);
    auVar3 = FUN_01bab630(&StringLiteral_7536/*"InitializeCallback: GraphApiVersion='"*/);
    DAT_04566dac = 1;
  }
  bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar3._0_8_,auVar3._8_8_);
  if (!bVar1) {
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_7537/*"InitializeCallback: failed to initialize the Facebook SDK!"*/,(MethodInfo *)0x0);
    return;
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045604e9 == '\0') {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    DAT_045604e9 = '\x01';
  }
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_7536/*"InitializeCallback: GraphApiVersion='"*/,
                           Facebook_Unity_FB_TypeInfo->static_fields->graphApiVersion,
                           StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  KGLCGFMIEGI__CHMGIIMLANF(__this,method_00);
  pFVar2 = (__this->fields).BPONHHDHOAB;
  if (pFVar2 != (Facebook_Unity_InitDelegate_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032ebef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pFVar2->fields).super.super.invoke_impl)
              ((pFVar2->fields).super.super.method_code,(pFVar2->fields).super.super.method);
    return;
  }
  return;
}


// ===== private void DIJCCOKNDLN(IShareResult HPACPFLKHPK)  [RVA 0x31EC69C]
// KGLCGFMIEGI$$DIJCCOKNDLN @ RVA 0x31EC69C

void KGLCGFMIEGI__DIJCCOKNDLN
               (KGLCGFMIEGI_o *__this,Facebook_Unity_IShareResult_o *HPACPFLKHPK,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *value;
  Facebook_Unity_IShareResult_c *pFVar4;
  System_Action_bool__o *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04566dad & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_IResult_TypeInfo);
    FUN_01bab630(&StringLiteral_10372/*"PostCallback"*/);
    DAT_04566dad = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_10372/*"PostCallback"*/,(MethodInfo *)0x0);
  pSVar5 = (__this->fields).IJLLOMCHLBP;
  if (pSVar5 == (System_Action_bool__o *)0x0) {
    return;
  }
  if (HPACPFLKHPK == (Facebook_Unity_IShareResult_o *)0x0) {
    bVar2 = true;
  }
  else {
    pFVar4 = HPACPFLKHPK->klass;
    uVar1._0_1_ = (pFVar4->_2).rank;
    uVar1._1_1_ = (pFVar4->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pFVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar3 = pFVar4->vtable + *piVar7;
          goto LAB_032ec774;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,0);
LAB_032ec774:
    value = (System_String_o *)(*pVVar3->methodPtr)(HPACPFLKHPK,pVVar3->method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (HPACPFLKHPK == (Facebook_Unity_IShareResult_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x032ec7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pSVar5->fields).super.super.invoke_impl)
            ((pSVar5->fields).super.super.method_code,bVar2,(pSVar5->fields).super.super.method);
  return;
}

