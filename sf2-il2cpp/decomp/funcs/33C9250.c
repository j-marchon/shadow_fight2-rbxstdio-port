// BANPLPOPIGI$$.ctor @ RVA 0x33C9250

void BANPLPOPIGI___ctor(BANPLPOPIGI_o *__this,
                       Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *MIJCJJCICDA,
                       Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
                       UnityEngine_GameObject_o *LHDLBKGFPEJ,bool OKLLOECEHJB,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_int__o **ppSVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__List_ICPMLKOEANF___o **ppSVar3;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_01;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o **ppSVar4;
  System_Collections_Generic_Dictionary_int__List_RaidLeaguesLeaderboard_OIMJFDFDMMM___o **ppSVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o **ppNVar6;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar7;
  UnityEngine_GameObject_o **ppUVar8;
  MethodInfo *method_00;
  
  if ((DAT_04567e07 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>__ctor__);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    DAT_04567e07 = 1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar1 = &(__this->fields).JDHINHCBLNC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>__ctor__);
  ppSVar3 = &(__this->fields).IBEGIIPEOAK;
  *ppSVar3 = (System_Collections_Generic_Dictionary_int__List_ICPMLKOEANF___o *)pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  __this_01 = (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__);
  ppSVar4 = &(__this->fields).JKBONEFMACI;
  *ppSVar4 = __this_01;
  thunk_FUN_01c20e04(ppSVar4,__this_01);
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar2,
             Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
            );
  ppSVar5 = &(__this->fields).BGMOJHCPOND;
  *ppSVar5 = (System_Collections_Generic_Dictionary_int__List_RaidLeaguesLeaderboard_OIMJFDFDMMM___o
              *)pSVar2;
  thunk_FUN_01c20e04(ppSVar5,pSVar2);
  (__this->fields).OEBELMAFGAF = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar6 = &(__this->fields).HJLDGHLININ;
  *ppNVar6 = MIJCJJCICDA;
  thunk_FUN_01c20e04(ppNVar6,MIJCJJCICDA);
  ppNVar7 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar7 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar7,MGFBPKIBNJI);
  ppUVar8 = &(__this->fields).DGEDNGEEBOP;
  *ppUVar8 = LHDLBKGFPEJ;
  thunk_FUN_01c20e04(ppUVar8,LHDLBKGFPEJ);
  (__this->fields).FFLNLBEPNNH = -1;
  (__this->fields).OEBELMAFGAF = OKLLOECEHJB;
  BANPLPOPIGI__JOIFLMJEEJK(__this,method_00);
  return;
}

