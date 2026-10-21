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
    FUN_01bab630(&StringLiteral_861);
    FUN_01bab630(&StringLiteral_866);
    FUN_01bab630(&StringLiteral_873);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_874);
    auVar5 = FUN_01bab630(&StringLiteral_10371);
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
      values->m_Items[0] = StringLiteral_10371;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (FKILEEEIABI->fields).NPNLDGIBGMP;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_873;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (FKILEEEIABI->fields).JIJLBFGKNJK;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_861;
              thunk_FUN_01c20e04(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = (FKILEEEIABI->fields).OCPLOFNKMHH;
                thunk_FUN_01c20e04(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_866;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = (FKILEEEIABI->fields).BPCADJLKKGA;
                    thunk_FUN_01c20e04(values->m_Items + 7);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = StringLiteral_874;
                      thunk_FUN_01c20e04(values->m_Items + 8);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = (FKILEEEIABI->fields).FNPDDNFLHFK;
                        thunk_FUN_01c20e04(values->m_Items + 9);
                        if (10 < (uint)values->max_length) {
                          values->m_Items[10] = StringLiteral_802;
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

