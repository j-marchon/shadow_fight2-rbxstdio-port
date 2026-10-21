// TypeDefIndex 1630
// Namespace: 
// public class BCPODJMEKMJ : IEFEBEDLHNN
// Fields:
//   public List<MGNDHCBAPEN<string, float>> AGJPNDANDGC; // 0xC8
//   private List<MGNDHCBAPEN<IEFEBEDLHNN, float>> PLMBJNAAGOI; // 0xD0

// ===== public void .ctor(string KGLJICLJHEL, CNDPAJOLKFN FJJJGOHDLBH)  [RVA 0x31BE6D4]
// BCPODJMEKMJ$$.ctor @ RVA 0x31BE6D4

void BCPODJMEKMJ___ctor(BCPODJMEKMJ_o *__this,System_String_o *KGLJICLJHEL,
                       CNDPAJOLKFN_o *FJJJGOHDLBH,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o **ppSVar2;
  
  if ((DAT_04566c04 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    DAT_04566c04 = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  ppSVar1 = &(__this->fields).AGJPNDANDGC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
  ppSVar2 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEFEBEDLHNN___ctor((IEFEBEDLHNN_o *)__this,KGLJICLJHEL,FJJJGOHDLBH,(MethodInfo *)0x0);
  IEFEBEDLHNN__GNLPNKGBAFL((IEFEBEDLHNN_o *)__this,1,(MethodInfo *)0x0);
  return;
}


// ===== public List<MGNDHCBAPEN<IEFEBEDLHNN, float>> KNLIDFOCHKP()  [RVA 0x31BE7FC]
// BCPODJMEKMJ$$KNLIDFOCHKP @ RVA 0x31BE7FC

System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *
BCPODJMEKMJ__KNLIDFOCHKP(BCPODJMEKMJ_o *__this,MethodInfo *method)

{
  return (__this->fields).PLMBJNAAGOI;
}


// ===== public void BGFNHJFJOLL(IEFEBEDLHNN ELHGBMHJKCC, float EEJDCAPLKON)  [RVA 0x31BE804]
// BCPODJMEKMJ$$BGFNHJFJOLL @ RVA 0x31BE804

void BCPODJMEKMJ__BGFNHJFJOLL
               (BCPODJMEKMJ_o *__this,IEFEBEDLHNN_o *ELHGBMHJKCC,float EEJDCAPLKON,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MGNDHCBAPEN_IEFEBEDLHNN__float__o *__this_00;
  MGNDHCBAPEN_IEFEBEDLHNN__float__array *pMVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *__this_01;
  
  if ((DAT_04566c05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_Add__);
    FUN_01bab630(&Method_MGNDHCBAPEN<IEFEBEDLHNN,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<IEFEBEDLHNN,_float>_TypeInfo);
    DAT_04566c05 = 1;
  }
  __this_01 = (__this->fields).PLMBJNAAGOI;
  __this_00 = (MGNDHCBAPEN_IEFEBEDLHNN__float__o *)
              thunk_FUN_01bda818(MGNDHCBAPEN<IEFEBEDLHNN,_float>_TypeInfo);
  MGNDHCBAPEN<object,_float>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)ELHGBMHJKCC,EEJDCAPLKON,
             Method_MGNDHCBAPEN<IEFEBEDLHNN,_float>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_Add__;
  if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)0x0) {
    pMVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pMVar3 != (MGNDHCBAPEN_IEFEBEDLHNN__float__array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pMVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,__this_00);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NMCMOPHAAPH()  [RVA 0x31BE910]
// BCPODJMEKMJ$$NMCMOPHAAPH @ RVA 0x31BE910

void BCPODJMEKMJ__NMCMOPHAAPH(BCPODJMEKMJ_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  CNDPAJOLKFN_o *pCVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *__this_00;
  Il2CppObject *pIVar4;
  int index;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  
  if ((DAT_04566c06 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_get_Item__
                );
    DAT_04566c06 = 1;
  }
  bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).super.MKNHLACCLLP.fields,(MethodInfo *)0x0);
  if (bVar2) {
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).super.MKNHLACCLLP.fields = CVar5;
    return;
  }
  pCVar3 = (__this->fields).super.BJKKHONDAKP;
  if (pCVar3 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar3,(__this->fields).super.CNMHHKAMGPI,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).super.CNMHHKAMGPI;
    if (pCVar3 != (CNDPAJOLKFN_o *)0x0) {
      CNDPAJOLKFN__DGLJCGNHLIG(pCVar3,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PLMBJNAAGOI;
      if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)0x0) {
        iVar1 = (__this_00->fields)._size;
        if (iVar1 < 1) {
          return;
        }
        index = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_get_Item__
                             );
          if (((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].klass == (Il2CppClass *)0x0)) ||
             (pCVar3 = (__this->fields).super.CNMHHKAMGPI, pCVar3 == (CNDPAJOLKFN_o *)0x0)) break;
          CNDPAJOLKFN__LFENGGKOJDO
                    (pCVar3,*(CNDPAJOLKFN_o **)&((pIVar4[1].klass)->_1).this_arg.bits,
                     *(float *)&pIVar4[1].monitor,(MethodInfo *)0x0);
          index = index + 1;
          if (iVar1 == index) {
            return;
          }
          __this_00 = (__this->fields).PLMBJNAAGOI;
        } while (__this_00 !=
                 (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(BCPODJMEKMJ AAOOKAGABPJ)  [RVA 0x31BEA18]
// BCPODJMEKMJ$$.ctor @ RVA 0x31BEA18

void BCPODJMEKMJ___ctor(BCPODJMEKMJ_o *__this,BCPODJMEKMJ_o *AAOOKAGABPJ,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *pSVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *collection;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o **ppSVar3;
  
  if ((DAT_04566c07 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    DAT_04566c07 = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  ppSVar1 = &(__this->fields).AGJPNDANDGC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pSVar2 = (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
  ppSVar3 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEFEBEDLHNN___ctor((IEFEBEDLHNN_o *)__this,(IEFEBEDLHNN_o *)AAOOKAGABPJ,(MethodInfo *)0x0);
  if (AAOOKAGABPJ != (BCPODJMEKMJ_o *)0x0) {
    collection = (AAOOKAGABPJ->fields).PLMBJNAAGOI;
    pSVar2 = (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo
                               );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    (__this->fields).PLMBJNAAGOI = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    IEFEBEDLHNN__GNLPNKGBAFL((IEFEBEDLHNN_o *)__this,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

