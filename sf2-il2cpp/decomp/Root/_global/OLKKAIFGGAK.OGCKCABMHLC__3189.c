// TypeDefIndex 3189
// Namespace: 
// public class OLKKAIFGGAK.OGCKCABMHLC
// Fields:
//   public CNDPAJOLKFN GKLKOCOKMDB; // 0x10
//   public CNDPAJOLKFN LCOKNJLLJKG; // 0x18
//   public CNDPAJOLKFN GDPIIGNJCLE; // 0x20
//   public GEBHIBIEAJE POPNNGCHBML; // 0x28
//   public GEBHIBIEAJE GBPPPKHOPEA; // 0x30
//   public ECENNHNBAME OKMFPICFIAD; // 0x38
//   public MDAPDLLMOMF GBMBJJOMAID; // 0x40
//   public float ICLMPILAAGC; // 0x48
//   public float CEMEJDHDPLL; // 0x4C
//   public float MINHMMAFDGF; // 0x50
//   public string LKNOHFANHAE; // 0x58
//   public int KAEBCKDNFHH; // 0x60
//   public int NIDLAKDCNOO; // 0x64
//   public bool CKGOPICDKMO; // 0x68
//   public bool FPKMILDKMHH; // 0x69
//   public bool BBFPCBEFOLN; // 0x6A
//   public bool EPPIJIGMFFJ; // 0x6B
//   public bool NLFJFKCJEAC; // 0x6C
//   public bool FCKDFGMFHHF; // 0x6D
//   public bool FNPCAFCGKLD; // 0x6E
//   public OLKKAIFGGAK HEMGHNOOJPI; // 0x70
//   public OLKKAIFGGAK PFFLOCBGFCH; // 0x78
//   public List<int> BFNCMBCHJCF; // 0x80
//   public int FGMGGMFLPMA; // 0x88

// ===== public void .ctor()  [RVA 0x34F9F4C]
// OLKKAIFGGAK.OGCKCABMHLC$$.ctor @ RVA 0x34F9F4C

void OLKKAIFGGAK_OGCKCABMHLC___ctor(OLKKAIFGGAK_OGCKCABMHLC_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  CNDPAJOLKFN_o **ppCVar1;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_int__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568817 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568817 = 1;
    method = extraout_x1;
  }
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  CNDPAJOLKFN___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).GDPIIGNJCLE;
  *ppCVar1 = __this_00;
  thunk_FUN_01c20e04(ppCVar1,__this_00);
  (__this->fields).LKNOHFANHAE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_01 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_01,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).BFNCMBCHJCF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void AFAIENMIAKE(int INJDEPHMFIK)  [RVA 0x34FA038]
// OLKKAIFGGAK.OGCKCABMHLC$$AFAIENMIAKE @ RVA 0x34FA038

void OLKKAIFGGAK_OGCKCABMHLC__AFAIENMIAKE
               (OLKKAIFGGAK_OGCKCABMHLC_o *__this,int32_t INJDEPHMFIK,MethodInfo *method)

{
  if ((DAT_04568818 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<int>__);
    DAT_04568818 = 1;
  }
  DJNBJHPDKDP__OFNFOGHFDML<int>
            ((System_Collections_Generic_List_T__o *)(__this->fields).BFNCMBCHJCF,INJDEPHMFIK,
             Method_DJNBJHPDKDP_OFNFOGHFDML<int>__);
  return;
}

