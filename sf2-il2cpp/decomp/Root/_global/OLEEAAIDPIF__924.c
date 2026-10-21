// TypeDefIndex 924
// Namespace: 
// public class OLEEAAIDPIF : BOFEMGGNODC
// Fields:

// ===== public void .ctor()  [RVA 0x30A03E8]
// OLEEAAIDPIF$$.ctor @ RVA 0x30A03E8

void OLEEAAIDPIF___ctor(OLEEAAIDPIF_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x30A03F0]
// OLEEAAIDPIF$$MAHFCKJGBPP @ RVA 0x30A03F0

void OLEEAAIDPIF__MAHFCKJGBPP(OLEEAAIDPIF_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  IGFGDDANEPE_o *__this_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  GGHCLMEFIGO_o *pGVar4;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  int index;
  
  if ((DAT_0456613a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456613a = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
      (pGVar4 = (pAVar3->fields).OIDPLCLELEN, pGVar4 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_01 = (pGVar4->fields).DPOPJKJLDEE,
     __this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
    iVar1 = (__this_01->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
        if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[0xb].klass == (Il2CppClass *)0x0))
        goto LAB_031a0538;
        if (*(int *)&((pIVar2[0xb].klass)->_1).namespaze == 0) {
          __this_00 = (IGFGDDANEPE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,
                                 Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
          if (__this_00 == (IGFGDDANEPE_o *)0x0) goto LAB_031a0538;
          IGFGDDANEPE__PHAGOINEABA(__this_00,method_00);
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_031a0538:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

