// TypeDefIndex 2204
// Namespace: 
// public class MEJIKMPNBNL
// Fields:
//   private bool OHOEDCBKNGO; // 0x10
//   private string DEKCPPOJFEH; // 0x18
//   private string DINIOKEPIIP; // 0x20
//   public FNLLFBNCKBG HHJIJKJCEOF; // 0x28
//   private int JFNNLEIIIFM; // 0x2C
//   public List<OOMHDDBCBJP> BDCBJJGNPMC; // 0x30
//   public Lazy<Dictionary<OOMHDDBCBJP, OOMHDDBCBJP>> IDDMNAAIEMB; // 0x38
//   private uint JANAIIBBHIK; // 0x40
//   private uint IJEMNNPDBEM; // 0x44

// ===== public void NCENBOMEPBN(long LFJGFLNMBMC)  [RVA 0x32E7854]
// MEJIKMPNBNL$$NCENBOMEPBN @ RVA 0x32E7854

void MEJIKMPNBNL__NCENBOMEPBN(MEJIKMPNBNL_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_0456761c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_0456761c = 1;
  }
  __this_00 = (__this->fields).BDCBJJGNPMC;
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      (*pIVar2->klass->vtable[0x12].methodPtr)
                (pIVar2,LFJGFLNMBMC,pIVar2->klass->vtable[0x12].method);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).BDCBJJGNPMC;
    } while (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(string KGLJICLJHEL, string LFGKEPCBPKF, bool PAOOALGAMIO = False, FNLLFBNCKBG MNPKIDDPNBM = 2, int DPJIDNBJIBG = 0, uint JDIHKNKFJMK = 0, uint EHEFEIEKHJO = 0)  [RVA 0x32E7900]
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


// ===== public uint PADHPGMANOD()  [RVA 0x32E7A80]
// MEJIKMPNBNL$$PADHPGMANOD @ RVA 0x32E7A80

uint32_t MEJIKMPNBNL__PADHPGMANOD(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  return (__this->fields).JANAIIBBHIK;
}


// ===== public OOMHDDBCBJP ANCEMNBGNAN()  [RVA 0x32E7A88]
// MEJIKMPNBNL$$ANCEMNBGNAN @ RVA 0x32E7A88

OOMHDDBCBJP_o * MEJIKMPNBNL__ANCEMNBGNAN(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  System_Func_OOMHDDBCBJP__bool__o **ppSVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *source;
  System_Func_OOMHDDBCBJP__bool__o *predicate;
  
  if ((DAT_0456761e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<OOMHDDBCBJP>__);
    FUN_01bab630(&System_Func<OOMHDDBCBJP,_bool>_TypeInfo);
    FUN_01bab630(&Method_MEJIKMPNBNL_<>c_HFELGODPNGN__);
    FUN_01bab630(&MEJIKMPNBNL_<>c_TypeInfo);
    DAT_0456761e = 1;
    method = extraout_x1;
  }
  source = (__this->fields).BDCBJJGNPMC;
  if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__22_0;
  if (predicate == (System_Func_OOMHDDBCBJP__bool__o *)0x0) {
    if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    }
    predicate = (System_Func_OOMHDDBCBJP__bool__o *)
                thunk_FUN_01bda818(System_Func<OOMHDDBCBJP,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__22_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
  pOVar2 = (OOMHDDBCBJP_o *)
           System_Linq_Enumerable__FirstOrDefault<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_FirstOrDefault<OOMHDDBCBJP>__);
  return pOVar2;
}


// ===== public string JCPIPEJAIAC()  [RVA 0x32E7B84]
// MEJIKMPNBNL$$JCPIPEJAIAC @ RVA 0x32E7B84

System_String_o * MEJIKMPNBNL__JCPIPEJAIAC(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  return (__this->fields).DINIOKEPIIP;
}


// ===== public List<OOMHDDBCBJP> LJOCPCHJNIJ(COALAGILPBO ACCIHBHMFPN, bool EMACOPPADFA = False)  [RVA 0x32E7B8C]
// MEJIKMPNBNL$$LJOCPCHJNIJ @ RVA 0x32E7B8C

System_Collections_Generic_List_OOMHDDBCBJP__o *
MEJIKMPNBNL__LJOCPCHJNIJ
          (MEJIKMPNBNL_o *__this,int32_t ACCIHBHMFPN,bool EMACOPPADFA,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  OOMHDDBCBJP_array *pOVar7;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456761f & 1) == 0) {
    FUN_01bab630(&COALAGILPBO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5957/*"Error: _battles with type={0} not found"*/);
    DAT_0456761f = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_OOMHDDBCBJP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OOMHDDBCBJP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>__ctor__);
  __this_01 = (__this->fields).BDCBJJGNPMC;
  if (__this_01 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_60.fields._list =
         (System_Collections_Generic_List_T__o *)
         CONCAT44(local_78.fields._list._4_4_,(int32_t)local_78.fields._list);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      pIVar4 = local_60.fields._current;
      if (!bVar2) break;
      if ((OOMHDDBCBJP_o *)local_60.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)local_60.fields._current,(MethodInfo *)0x0);
      lVar5 = Method_System_Collections_Generic_List<OOMHDDBCBJP>_Add__;
      if (iVar3 == ACCIHBHMFPN) {
        if (__this_00 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pOVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pOVar7 == (OOMHDDBCBJP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pOVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pOVar7->m_Items[(int)uVar1] = (OOMHDDBCBJP_o *)pIVar4;
          thunk_FUN_01c20e04(pOVar7->m_Items + (int)uVar1,pIVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,pIVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      if (((__this_00->fields)._size == 0) && (EMACOPPADFA)) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_78.fields._list._0_4_ = ACCIHBHMFPN;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(COALAGILPBO_TypeInfo,&local_78);
        if (args == (System_Object_array *)0x0) goto LAB_033e7e2c;
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_5957/*"Error: _battles with type={0} not found"*/,args,(MethodInfo *)0x0);
      }
      return __this_00;
    }
  }
LAB_033e7e2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x32E7EB0]
// MEJIKMPNBNL$$KCHJCGEMCGE @ RVA 0x32E7EB0

System_String_o * MEJIKMPNBNL__KCHJCGEMCGE(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== private Dictionary<OOMHDDBCBJP, OOMHDDBCBJP> LFLCFGKPOAK()  [RVA 0x32E7EB8]
// MEJIKMPNBNL$$LFLCFGKPOAK @ RVA 0x32E7EB8

System_Collections_Generic_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP__o *
MEJIKMPNBNL__LFLCFGKPOAK(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *pSVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *value;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  Il2CppClass *__this_01;
  Il2CppRGCTXData *str1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567620 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_MEJIKMPNBNL_OKJOIEBAGHA_LFBLLGKKHHE__);
    FUN_01bab630(&MEJIKMPNBNL_OKJOIEBAGHA_TypeInfo);
    FUN_01bab630(&System_Predicate<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&StringLiteral_493/*" not found for battle = "*/);
    FUN_01bab630(&StringLiteral_5619/*"Eclipse toggle battle with name = "*/);
    DAT_04567620 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>__ctor__);
  pSVar2 = (__this->fields).BDCBJJGNPMC;
  if (pSVar2 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
        return (System_Collections_Generic_Dictionary_OOMHDDBCBJP__OOMHDDBCBJP__o *)__this_00;
      }
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(MEJIKMPNBNL_OKJOIEBAGHA_TypeInfo);
      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      pIVar3 = pIVar3 + 1;
      pIVar3->klass = (Il2CppClass *)local_80.fields._current;
      thunk_FUN_01c20e04(pIVar3);
      if (pIVar3->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((System_String_o *)pIVar3->klass->rgctx_data,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = (__this->fields).BDCBJJGNPMC;
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OOMHDDBCBJP>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar2 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        value = System_Collections_Generic_List<object>__Find
                          ((System_Collections_Generic_List_object__o *)pSVar2,match,
                           Method_System_Collections_Generic_List<OOMHDDBCBJP>_Find__);
        __this_01 = pIVar3->klass;
        if (value == (Il2CppObject *)0x0) {
          if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          str1 = __this_01->rgctx_data;
          pSVar4 = OOMHDDBCBJP__LOHPFCGCHNH((OOMHDDBCBJP_o *)__this_01,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat
                             (StringLiteral_5619/*"Eclipse toggle battle with name = "*/,(System_String_o *)str1,StringLiteral_493/*" not found for battle = "*/,pSVar4,
                              (MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        }
        else {
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (__this_00,(Il2CppObject *)__this_01,value,
                     Method_System_Collections_Generic_Dictionary<OOMHDDBCBJP,_OOMHDDBCBJP>_Add__);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CNFNALBPCDK()  [RVA 0x32E822C]
// MEJIKMPNBNL$$CNFNALBPCDK @ RVA 0x32E822C

bool MEJIKMPNBNL__CNFNALBPCDK(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
                    /* try { // try from 033e822c to 034e835b has its CatchHandler @ 033e822c
                       catch() { ... } // from try @ 033e822c with catch @ 033e822c
                       catch() { ... } // from try @ 033e83ac with catch @ 033e822c
                       catch() { ... } // from try @ 033e8488 with catch @ 033e822c
                       catch() { ... } // from try @ 033e84b8 with catch @ 033e822c
                       catch() { ... } // from try @ 033e84ec with catch @ 033e822c */
  return (__this->fields).OHOEDCBKNGO;
}


// ===== public OOMHDDBCBJP KKPHCCBPIMN(string KGLJICLJHEL)  [RVA 0x32E8234]
// MEJIKMPNBNL$$KKPHCCBPIMN @ RVA 0x32E8234

OOMHDDBCBJP_o *
MEJIKMPNBNL__KKPHCCBPIMN(MEJIKMPNBNL_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_String_o *message;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567621 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_492/*" not found"*/);
    FUN_01bab630(&StringLiteral_5959/*"Error: battle with name="*/);
    DAT_04567621 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BDCBJJGNPMC;
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      pIVar1 = local_58.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 033e835c to 034e8363 has its CatchHandler @ 033e84a0 */
        message = System_String__Concat
                            (StringLiteral_5959/*"Error: battle with name="*/,KGLJICLJHEL,StringLiteral_492/*" not found"*/,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
                    /* try { // try from 033e8378 to 034e837f has its CatchHandler @ 033e848c */
        UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
        return (OOMHDDBCBJP_o *)0x0;
      }
      if ((OOMHDDBCBJP_o *)local_58.fields._current == (OOMHDDBCBJP_o *)0x0) break;
      bVar2 = System_String__op_Equality
                        (((OOMHDDBCBJP_Fields *)((long)local_58.fields._current + 0x10))->
                         DEKCPPOJFEH,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 033e838c to 034e83ab has its CatchHandler @ 033e84a4 */
        return (OOMHDDBCBJP_o *)pIVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CIEKPPJJEHK()  [RVA 0x32E8428]
// MEJIKMPNBNL$$CIEKPPJJEHK @ RVA 0x32E8428

int32_t MEJIKMPNBNL__CIEKPPJJEHK(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  return (__this->fields).JFNNLEIIIFM;
}


// ===== public uint KPPOBNIDLOC()  [RVA 0x32E8430]
// MEJIKMPNBNL$$KPPOBNIDLOC @ RVA 0x32E8430

uint32_t MEJIKMPNBNL__KPPOBNIDLOC(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  return (__this->fields).IJEMNNPDBEM;
}


// ===== public void FDFHMHPOHKA()  [RVA 0x32E8438]
// MEJIKMPNBNL$$FDFHMHPOHKA @ RVA 0x32E8438

void MEJIKMPNBNL__FDFHMHPOHKA(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Il2CppObject *pIVar5;
  int index;
  Il2CppClass *__this_01;
  int index_00;
  int iVar6;
  
  if ((DAT_04567622 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
                    /* try { // try from 033e8478 to 034e847b has its CatchHandler @ 033e849c */
                    /* try { // try from 033e847c to 034e847f has its CatchHandler @ 033e8498 */
                    /* try { // try from 033e8480 to 034e8483 has its CatchHandler @ 033e8494 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
                    /* try { // try from 033e8484 to 034e8487 has its CatchHandler @ 033e8490 */
                    /* try { // try from 033e8488 to 034e84b3 has its CatchHandler @ 033e822c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8378 with catch @ 033e848c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8484 with catch @ 033e8490
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8480 with catch @ 033e8494
                        */
    DAT_04567622 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e847c with catch @ 033e8498
                        */
  __this_00 = (__this->fields).BDCBJJGNPMC;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e8478 with catch @ 033e849c
                        */
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e835c with catch @ 033e84a0
                        */
    iVar1 = (__this_00->fields)._size;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e838c with catch @ 033e84a4
                        */
    if (iVar1 < 1) {
LAB_033e8564:
      (__this->fields).HHJIJKJCEOF = 3;
      return;
    }
                    /* try { // try from 033e84b4 to 034e84b7 has its CatchHandler @ 033e84dc */
                    /* try { // try from 033e84b8 to 034e84e3 has its CatchHandler @ 033e822c */
    index = 0;
    bVar3 = 0;
    iVar6 = 0;
    do {
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
                    /* catch() { ... } // from try @ 033e84b4 with catch @ 033e84dc */
      if ((pIVar5 == (Il2CppObject *)0x0) ||
         (__this_01 = pIVar5[10].klass, __this_01 == (Il2CppClass *)0x0)) break;
      iVar2 = *(int *)&(__this_01->_1).namespaze;
                    /* try { // try from 033e84e4 to 034e84eb has its CatchHandler @ 033e8500 */
      iVar4 = iVar6;
      if (0 < iVar2) {
                    /* try { // try from 033e84ec to 034e84f7 has its CatchHandler @ 033e822c */
        index_00 = 0;
        do {
                    /* try { // try from 033e84f8 to 034e84ff has its CatchHandler @ 033e8500 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e84e4 with catch @ 033e8500
                       catch(type#2 @ 00000000) { ... } // from try @ 033e84f8 with catch @ 033e8500
                        */
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index_00,
                              Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033e8554;
          if (*(int *)((long)&pIVar5[6].klass + 4) - 1U < 2) {
            (__this->fields).HHJIJKJCEOF = 2;
            bVar3 = 1;
            iVar4 = iVar6 + index_00 + 1;
            break;
          }
          index_00 = index_00 + 1;
          iVar4 = iVar6 + iVar2;
        } while (iVar2 != index_00);
      }
      iVar6 = iVar4;
      index = index + 1;
      if (index == iVar1) {
        if ((iVar6 != 0) && (!(bool)(bVar3 ^ 1))) {
          return;
        }
        goto LAB_033e8564;
      }
      __this_00 = (__this->fields).BDCBJJGNPMC;
    } while (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0);
  }
LAB_033e8554:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x32E8588]
// MEJIKMPNBNL$$RandomizeObscuredVars @ RVA 0x32E8588

void MEJIKMPNBNL__RandomizeObscuredVars(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Action_OOMHDDBCBJP__o *action;
  
  if ((DAT_04567623 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_ForEach__);
    FUN_01bab630(&Method_MEJIKMPNBNL_<>c_KIECENPIMPB__);
    FUN_01bab630(&MEJIKMPNBNL_<>c_TypeInfo);
    DAT_04567623 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BDCBJJGNPMC;
  if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__27_0;
  if (action == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    }
    action = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

