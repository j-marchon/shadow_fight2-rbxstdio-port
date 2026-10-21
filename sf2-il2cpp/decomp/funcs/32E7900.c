// MEJIKMPNBNL$$.ctor @ RVA 0x32E7900

void MEJIKMPNBNL___ctor(MEJIKMPNBNL_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *LFGKEPCBPKF,bool PAOOALGAMIO,int32_t MNPKIDDPNBM,
                       int32_t DPJIDNBJIBG,uint32_t JDIHKNKFJMK,uint32_t EHEFEIEKHJO,
                       MethodInfo *method)

{
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o **ppSVar1;
  System_String_o **ppSVar2;
  System_Func_T__o *valueFactory;
  System_Lazy_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP___o *__this_01;
  System_Lazy_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP___o **ppSVar3;
  
  if ((DAT_0456761d & 1) == 0) {
    FUN_01bab630(&System_Func<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>__ctor__);
    FUN_01bab630(&System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_MEJIKMPNBNL_LFLCFGKPOAK__);
    DAT_0456761d = 1;
  }
  __this_00 = (System_Collections_Generic_List_OOMHDDBCBJP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
  ppSVar1 = &(__this->fields).BDCBJJGNPMC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  ppSVar2 = &(__this->fields).DINIOKEPIIP;
  *ppSVar2 = LFGKEPCBPKF;
  thunk_FUN_01c20e04(ppSVar2,LFGKEPCBPKF);
  (__this->fields).OHOEDCBKNGO = PAOOALGAMIO;
  (__this->fields).HHJIJKJCEOF = MNPKIDDPNBM;
  (__this->fields).JFNNLEIIIFM = DPJIDNBJIBG;
  (__this->fields).JANAIIBBHIK = JDIHKNKFJMK;
  (__this->fields).IJEMNNPDBEM = EHEFEIEKHJO;
  valueFactory = (System_Func_T__o *)
                 thunk_FUN_01bda818(System_Func<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_TypeInfo);
  System_Func<object>___ctor();
  __this_01 = (System_Lazy_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP___o *)
              thunk_FUN_01bda818(System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>_TypeInfo);
  System_Lazy<object>___ctor
            ((System_Lazy_object__o *)__this_01,valueFactory,
             Method_System_Lazy<Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>>__ctor__);
  ppSVar3 = &(__this->fields).IDDMNAAIEMB;
  *ppSVar3 = __this_01;
  thunk_FUN_01c20e04(ppSVar3,__this_01);
  return;
}

